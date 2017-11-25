#include "network.h"
float relu(float a) {
	return a > 0.0f ? a:0.0f;
}

float diff_relu(float a) {
	return a > 0.0f ? 1.0f:0.0f;
}

kernel __attribute__((reqd_work_group_size(1, 1, 1)))
void forward_h1_kernel(global const unsigned char* src_data,
                global float* dst_data,
                global float* w01,
                global float* b1
		)
{
	float data[N_INPUT];
	// standlize
	for (int j=0;j<28*28;j++) {
		data[j] = src_data[j]/255.0f;
	}

	float z1[N_H1];
	// H1 perseptron 1024kai
	for (int j=0;j<N_H1;j++) {
		// perseptron 784->1
		z1[j] = 0.0f;
		for (int i=0;i<N_INPUT;i++) {
			// sum w*data
			//z1[j]+=w01[i][j]*data[i];
			z1[j]+=w01[i*N_INPUT+j]*data[i];
		}
		// sum bias
		z1[j]+=b1[j];
		// activation function
		// relu
		//a1[j]=relu(z1[j]);
		dst_data[j]=relu(z1[j]);
	}
}
