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

#include "weights.h"

float w01[N_INPUT][N_H1];
float new_w01[N_INPUT*N_H1];
float b1[N_H1];
float w12[N_H1][N_H2];
float new_w12[N_H1*N_H2];
float b2[N_H2];
float w23[N_H1][N_OUTPUT];
float new_w23[N_H1*N_OUTPUT];
float b3[N_OUTPUT];

int main(){
	char load_file[MAX_FILENAME]={"src.weights"};
	char save_file[MAX_FILENAME]={"dst.weights"};
	get_weights(load_file,w01,b1,w12,b2,w23,b3);
	for (int i=0;i<N_INPUT;i++) {
		for (int j=0;j<N_H1;j++)
			new_w01[i*N_INPUT+j] = w01[i][j];
	}
	for (int i=0;i<N_H1;i++) {
		for (int j=0;j<N_H2;j++)
			new_w12[i*N_INPUT+j] = w12[i][j];
	}
	for (int i=0;i<N_H2;i++) {
		for (int j=0;j<N_OUTPUT;j++)
			new_w23[i*N_INPUT+j] = w23[i][j];
	}
	new_write_weights(save_file,new_w01,b1,new_w12,b2,new_w23,b3);

	return 0;
}

