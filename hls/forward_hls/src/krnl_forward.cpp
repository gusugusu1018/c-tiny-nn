#include "network.h"
#include "math.h"
float relu(float a) {
	return a > 0.0f ? a:0.0f;
}

float diff_relu(float a) {
	return a > 0.0f ? 1.0f:0.0f;
}
extern "C" {
void forward_kernel(const unsigned char* src_data,
                float* dst_data,
                float* w01,
                float* b1,
                float* w12,
                float* b2,
                float* w23,
                float* b3
		)
{
#pragma HLS INTERFACE m_axi port=src_data offset=slave bundle=gmem0
#pragma HLS INTERFACE m_axi port=dst_data offset=slave bundle=gmem1
#pragma HLS INTERFACE m_axi port=w01 offset=slave bundle=gmem2
#pragma HLS INTERFACE m_axi port=b1 offset=slave bundle=gmem3
#pragma HLS INTERFACE m_axi port=w12 offset=slave bundle=gmem4
#pragma HLS INTERFACE m_axi port=b2 offset=slave bundle=gmem5
#pragma HLS INTERFACE m_axi port=w23 offset=slave bundle=gmem6
#pragma HLS INTERFACE m_axi port=b3 offset=slave bundle=gmem7
#pragma HLS INTERFACE s_axilite port=src_data bundle=control
#pragma HLS INTERFACE s_axilite port=dst_data bundle=control
#pragma HLS INTERFACE s_axilite port=w01 bundle=control
#pragma HLS INTERFACE s_axilite port=b1 bundle=control
#pragma HLS INTERFACE s_axilite port=w12 bundle=control
#pragma HLS INTERFACE s_axilite port=b2 bundle=control
#pragma HLS INTERFACE s_axilite port=w23 bundle=control
#pragma HLS INTERFACE s_axilite port=b3 bundle=control
#pragma HLS INTERFACE s_axilite port=return bundle=control
/*
	float data[N_INPUT];
	// standlize
	for (int j=0;j<28*28;j++) {
#pragma HLS unroll factor 784
		data[j] = src_data[j]/255.0f;
	}
*/
	float z1[N_H1];
	float a1[N_H1];
	// H1 perseptron 1024kai
	for (int j=0;j<N_H1;j++) {
//#pragma HLS unroll factor 2
//#pragma HLS pipeline II=1
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
	for (int j=0;j<N_H2;j++) {
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
	for (int j=0;j<N_OUTPUT;j++) {
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
	LOOP_SOFTMAX_1:for (int i=0; i<N_OUTPUT; i++) if(max < z3[i]) max = z3[i];
	LOOP_SOFTMAX_2:for (int i=0; i<N_OUTPUT; i++) {
#pragma HLS unroll factor 10
		a3[i] = exp(z3[i] - max);
		//sum += a3[i];
	}
	sum = a3[0]+a3[1]+a3[2]+a3[3]+a3[4]+a3[5]+a3[6]+a3[7]+a3[8]+a3[9];
	LOOP_SOFTMAX_3:for (int i=0; i<N_OUTPUT; i++){
#pragma HLS unroll factor 10
		 a3[i] /= sum;
	}
	LOOP_OUTPUT:for (int i=0; i<N_OUTPUT; i++) {
#pragma HLS unroll factor 10
		dst_data[i] = a3[i];
	}
}
}
