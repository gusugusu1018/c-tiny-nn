#include "network.h"
float relu(float a) {
	return a > 0.0f ? a:0.0f;
}

float diff_relu(float a) {
	return a > 0.0f ? 1.0f:0.0f;
}

kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void forward_kernel(global const unsigned char* src_data,
                global float* dst_data,
                global float* w01,
                global float* b1,
                global float* w12,
                global float* b2,
                global float* w23,
                global float* b3
		)
{
	float z1[N_H1];
	float a1[N_H1];
	// standlize
	// H1 perseptron 1024kai
	LOOP_H1:for (int j=0;j<N_H1;j++) {
		// perseptron 784->1
		z1[j] = 0.0f;
		for (int i=0;i<N_INPUT;i++) {
			// sum w*data
			//z1[j]+=w01[i][j]*data[i];
			//z1[j]+=w01[i*N_H1+j]*data[i];
			z1[j]+=w01[i*N_H1+j]*src_data[i]/255.0f;
		}
		// sum bias
		z1[j]+=b1[j];
		// activation function
		// relu
		a1[j]=relu(z1[j]);
	}

	float z2[N_H2];
	float a2[N_H2];
	// H2 perseptron 1024kai
	LOOP_H2:for (int j=0;j<N_H2;j++) {
		// perseptron 1024->1
		z2[j] = 0.0f;
		for (int i=0;i<N_H1;i++) {
			// sum w*a1
			//z2[j]+=w12[i][j]*a1[i];
			z2[j]+=w12[i*N_H2+j]*a1[i];
		}
		// sum bias
		z2[j]+=b2[j];
		// activation function
		// relu
		a2[j]=relu(z2[j]);
	}
	float z3[N_OUTPUT];
	float a3[N_OUTPUT];
	// OUTPUT layer
	LOOP_H3:for (int j=0;j<N_OUTPUT;j++) {
		// perseptron 1024->1
		z3[j] = 0.0f;
		for (int i=0;i<N_H2;i++) {
			// sum w*a1
			//z3[j]+=w23[i][j]*a2[i];
			z3[j]+=w23[i*N_OUTPUT+j]*a2[i];
		}
		// sum bias
		z3[j]+=b3[j];
	}

	// activation function
	// softmax
	float max = 0.0f;
	float sum = 0.0f;
	// overflow avoidance
	LOOP_SERCH_MAX:for (int i=0; i<N_OUTPUT; i++) if(max < z3[i]) max = z3[i];
	LOOP_EXP:for (int i=0; i<N_OUTPUT; i++) {
		a3[i] = exp(z3[i] - max);
		sum += a3[i];
	}
	//for (int i=0; i<N_OUTPUT; i++) a3[i] /= sum;
	//for (int i=0; i<N_OUTPUT; i++) dst_data[i] = a3[i];
	LOOP_SOFTMAX:for (int i=0; i<N_OUTPUT; i++) dst_data[i] = a3[i]/sum;
}
