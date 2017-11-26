#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <CL/cl.h>
#include <vector>
#include <math.h>
#include "xcl2.hpp"

#include "network.h"
#define MAX_FILENAME    30

#include "mnist.h"
#include "weights.h"

float relu(float a) {
	return a > 0.0f ? a:0.0f;
}

float diff_relu(float a) {
	return a > 0.0f ? 1.0f:0.0f;
}

float data[N_INPUT];
float temp01[N_INPUT][N_H1];
float w01[N_INPUT*N_H1];
float b1[N_H1];
float z1[N_H1];
float a1[N_H1];
float temp12[N_H1][N_H2];
float w12[N_H1*N_H2];
float b2[N_H2];
float z2[N_H2];
float a2[N_H2];
float temp23[N_H2][N_OUTPUT];
float w23[N_H2*N_OUTPUT];
float b3[N_OUTPUT];
float z3[N_OUTPUT];
float a3[N_OUTPUT];

int main(int argc, char** argv)
{
	std::vector<std::vector<float> > train_data;
	std::vector<float> label_data;
	Mnist mnist;
	printf("read dataset\n");
	train_data = mnist.readTrainingFile("data/t10k-images-idx3-ubyte");
	label_data = mnist.readLabelFile("data/t10k-labels-idx1-ubyte");
	char load_file[MAX_FILENAME]={"data/new.weights"};
	int counter=0;
	//openCL*******************
	std::vector<cl::Device> devices = xcl::get_xil_devices();
	cl::Device device = devices[0];
	cl::Context context(device);
	cl::CommandQueue q(context, device,CL_QUEUE_PROFILING_ENABLE);
	std::string device_name = device.getInfo<CL_DEVICE_NAME>(); 
	std::string binaryFile = xcl::find_binary_file(device_name,"krnl_forward_h2");
	cl::Program::Binaries bins = xcl::import_binary_file(binaryFile);
	devices.resize(1);
	cl::Program program(context, devices, bins);
	cl::Kernel krnl(program,"forward_h2_kernel");

	//****************get weight and bias*******************
	printf("get weights\n");
	get_weights(load_file,temp01,b1,temp12,b2,temp23,b3);
	//*************************forward****************************
	// data
	unsigned char dataToDevice[N_INPUT];
	for (int j=0;j<28*28;j++) {
		dataToDevice[j] = (unsigned char)train_data[counter][j];
	}
	for (int i=0;i<N_INPUT;i++) {
		for (int j=0;j<N_H1;j++) {
			w01[i*N_INPUT+j] = temp01[i][j];
		}
	}
	for (int i=0;i<N_H1;i++) {
		for (int j=0;j<N_H2;j++) {
			w12[i*N_H1+j] = temp12[i][j];
		}
	}
	// output data
	float dataToHost[N_H2];
	// size
	size_t size_Input_data_bytes = 28*28*sizeof(unsigned char);
	size_t size_Output_data_bytes = N_H1*sizeof(float);
	size_t size_w01_bytes = N_INPUT*N_H1*sizeof(float);
	size_t size_b1_bytes = N_H1*sizeof(float);
	size_t size_w12_bytes = N_H1*N_H2*sizeof(float);
	size_t size_b2_bytes = N_H2*sizeof(float);
	printf("make buffer\n");
	cl::Buffer dataToDeviceBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_Input_data_bytes, dataToDevice);
	cl::Buffer w01Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_w01_bytes, w01);
	cl::Buffer b1Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_b1_bytes, b1);
	cl::Buffer w12Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_w12_bytes, w12);
	cl::Buffer b2Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_b2_bytes, b2);
	cl::Buffer dataToHostBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, size_Output_data_bytes, dataToHost);

	std::vector<cl::Memory> inBufVec, outBufVec;
	inBufVec.push_back(dataToDeviceBuff);
	inBufVec.push_back(w01Buff);
	inBufVec.push_back(b1Buff);
	inBufVec.push_back(w12Buff);
	inBufVec.push_back(b2Buff);
	outBufVec.push_back(dataToHostBuff);
	// Copy input vectors to memory
	printf("Copy input vectors to memory\n");
	q.enqueueMigrateMemObjects(inBufVec,0);// 0 means from host
	// Set the kernel arguments
	krnl.setArg(0, dataToDeviceBuff);
	krnl.setArg(1, dataToHostBuff);
	krnl.setArg(2, w01Buff);
	krnl.setArg(3, b1Buff);
	krnl.setArg(4, w12Buff);
	krnl.setArg(5, b2Buff);
	// Launch the kernel 
	printf("Launch the kernel\n");
	q.enqueueTask(krnl);
	q.enqueueMigrateMemObjects(outBufVec,CL_MIGRATE_MEM_OBJECT_HOST);
	q.finish();
	for (int j=0;j<N_H2;j++) {
		std::cout<<dataToHost[j]<<std::endl;
	}

	return 0;
}
