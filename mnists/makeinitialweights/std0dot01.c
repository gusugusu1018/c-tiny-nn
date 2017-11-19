#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define N_INPUT 784
#define N_H1	1024
#define N_H2	1024
#define N_OUTPUT	10
#define MAX_FILENAME	30

#include "../weights/weights.h"

float rand_uniform()
{
  float ret = ((float) rand() + 1.0f) / ((float) RAND_MAX + 2.0f);
  return ret;
}
float rand_normal(float mu, float sigma)
{
  float  z = sqrt(-2.0f * log(rand_uniform())) * sin(2.0f * M_PI * rand_uniform());
  return mu + sigma * z;
}


int main(){

	float w01[N_INPUT][N_H1];
	float b1[N_H1];
	float w12[N_H1][N_H2];
	float b2[N_H2];
	float w23[N_H1][N_OUTPUT];
	float b3[N_OUTPUT];

	char save_file[MAX_FILENAME]={"initial.weights"};

	//****************initialize weight and bias*******************
	float mu=0.0f;
	float sigma=0.01f;
   printf("std=%f\n",sigma);
	for (int i=0;i<N_INPUT;i++) {
		for (int j=0;j<N_H1;j++)
			w01[i][j] = rand_normal(mu,sigma);
	}
	for (int i=0;i<N_H1;i++) {
		//b1[i] = rand_normal(mu,sigma);
		b1[i] = 0.0f;
	}
	for (int i=0;i<N_H1;i++) {
		for (int j=0;j<N_H2;j++)
			w12[i][j] = rand_normal(mu,sigma);
	}
	for (int i=0;i<N_H2;i++) {
		//b2[i] = rand_normal(mu,sigma);
      b2[i] = 0.0f;
	}
	for (int i=0;i<N_H2;i++) {
		for (int j=0;j<N_OUTPUT;j++)
			w23[i][j] = rand_normal(mu,sigma);
	}
	for (int i=0;i<N_OUTPUT;i++) {
		//b3[i] = rand_normal(mu,sigma);
      b3[i] = 0.0f;
	}

	write_weights(save_file,w01,b1,w12,b2,w23,b3);
   get_weights(save_file,w01,b1,w12,b2,w23,b3);

	return 0;
}

