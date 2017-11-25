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
#include "xcl2.hpp"

#include "mnist.h"

#define N_INPUT 784

int main(int argc, char** argv)
{
	std::vector<std::vector<float> > train_data;
	std::vector<float> label_data;
	Mnist mnist;
	train_data = mnist.readTrainingFile("data/t10k-images-idx3-ubyte");
	label_data = mnist.readLabelFile("data/t10k-labels-idx1-ubyte");
	float data[N_INPUT];
	int counter=0;

	//openCL*******************
	std::vector<cl::Device> devices = xcl::get_xil_devices();
	cl::Device device = devices[0];
	cl::Context context(device);
	cl::CommandQueue q(context, device,CL_QUEUE_PROFILING_ENABLE);
	std::string device_name = device.getInfo<CL_DEVICE_NAME>(); 
	//
	std::string binaryFile = xcl::find_binary_file(device_name,"krnl_standlize");
	cl::Program::Binaries bins = xcl::import_binary_file(binaryFile);
	devices.resize(1);
	cl::Program program(context, devices, bins);
	//
	cl::Kernel krnl(program,"standlize_kernel");

	// data
	unsigned char dataToDevice[N_INPUT];
	for (int j=0;j<28*28;j++) {
		dataToDevice[j] = (unsigned char)train_data[counter][j];
	}
	// size
	size_t size_Input_data_bytes = 28*28*sizeof(unsigned char);
	// standlized data
	float dataToHost[28*28];
	// size
	size_t size_Output_data_bytes = 28*28*sizeof(float);

	cl::Buffer dataToDeviceBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_Input_data_bytes, dataToDevice);
	cl::Buffer dataToHostBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, size_Output_data_bytes, dataToHost);

	std::vector<cl::Memory> inBufVec, outBufVec;
	inBufVec.push_back(dataToDeviceBuff);
	outBufVec.push_back(dataToHostBuff);

	// Copy input vectors to memory
	q.enqueueMigrateMemObjects(inBufVec,0);// 0 means from host

	// Set the kernel arguments
	krnl.setArg(0, dataToDeviceBuff);
	krnl.setArg(1, dataToHostBuff);
	// Launch the kernel 
	q.enqueueTask(krnl);

	q.enqueueMigrateMemObjects(outBufVec,CL_MIGRATE_MEM_OBJECT_HOST);
	q.finish();

	// standlize on HOST
	for (int j=0;j<28*28;j++) {
		data[j] = dataToDevice[j]/255.0f;
	}
	printf("host\n");
	for (int j=0;j<28;j++) {
		for (int i=0;i<28;i++) {
			if (data[i+j*28]!=0) {
				std::cout<<" M";
			}else {
				std::cout<<"  ";
			}
			//std::cout <<" "<< data[i+j*28];
		}
		std::cout<<std::endl;
	}
	printf("device\n");
	for (int j=0;j<28;j++) {
		for (int i=0;i<28;i++) {
			if (dataToHost[i+j*28]!=0.0f) {
				std::cout<<" M";
			}else {
				std::cout<<"  ";
			}
			//std::cout <<" "<< dataToHost[i+j*28];
		}
		std::cout<<std::endl;
	}
	return 0;
}
