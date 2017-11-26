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
	/*
	   for (int i=0;i<N_H2;i++) {
	   for (int j=0;j<N_OUTPUT;j++) {
	   w23[i*N_H2+j] = temp23[i][j];
	   }
	   }
	   */
	// output data
	float dataToHost[N_H1];
	//float dataToHost[N_H2];
	//float dataToHost[N_OUTPUT];
	// size
	size_t size_Input_data_bytes = 28*28*sizeof(unsigned char);
	size_t size_Output_data_bytes = N_H1*sizeof(float);
	//size_t size_Output_data_bytes = N_H2*sizeof(float);
	//size_t size_Output_data_bytes = N_OUTPUT*sizeof(float);
	size_t size_w01_bytes = N_INPUT*N_H1*sizeof(float);
	size_t size_b1_bytes = N_H1*sizeof(float);
	size_t size_w12_bytes = N_H1*N_H2*sizeof(float);
	size_t size_b2_bytes = N_H2*sizeof(float);
	size_t size_w23_bytes = N_H2*N_OUTPUT*sizeof(float);
	size_t size_b3_bytes = N_OUTPUT*sizeof(float);
	printf("make buffer\n");
	cl::Buffer dataToDeviceBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_Input_data_bytes, dataToDevice);
	cl::Buffer w01Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_w01_bytes, w01);
	cl::Buffer b1Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_b1_bytes, b1);
	cl::Buffer w12Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_w12_bytes, w12);
	cl::Buffer b2Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_b2_bytes, b2);
	/*
	   cl::Buffer w23Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_w23_bytes, w23);
	   cl::Buffer b3Buff(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, size_b3_bytes, b3);
	   */
	cl::Buffer dataToHostBuff(context,CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY, size_Output_data_bytes, dataToHost);

	std::vector<cl::Memory> inBufVec, outBufVec;
	//	std::vector<cl::Memory> inBufVec, outBufVec;
	inBufVec.push_back(dataToDeviceBuff);
	inBufVec.push_back(w01Buff);
	inBufVec.push_back(b1Buff);
	inBufVec.push_back(w12Buff);
	inBufVec.push_back(b2Buff);
	/*
	   inBufVec.push_back(w23Buff);
	   inBufVec.push_back(b3Buff);
	   */
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
	/*
	   krnl.setArg(6, w23Buff);
	   krnl.setArg(7, b3Buff);
	   */
	// Launch the kernel 
	printf("Launch the kernel\n");
	q.enqueueTask(krnl);
	q.enqueueMigrateMemObjects(outBufVec,CL_MIGRATE_MEM_OBJECT_HOST);
	q.finish();
	for (int j=0;j<N_H2;j++) {
		//for (int j=0;j<N_OUTPUT;j++) {
		std::cout<<dataToHost[j]<<std::endl;
	}

	return 0;
	/*
	//int epoch = 100;
	float max = 0.0f;
	float sum = 0.0f;
	float cost = 0.0f;
	float accracy = 0.0f;
	// H1 perseptron 1024kai
	for (int j=0;j<N_H1;j++) {
	// perseptron 784->1
	z1[j] = 0.0f;
	for (int i=0;i<N_INPUT;i++) {
	// sum w*data
	z1[j]+=w01[i][j]*data[i];
	}
	// sum bias
	z1[j]+=b1[j];
	// activation function
	// relu
	a1[j]=relu(z1[j]);
	}

	// H2 perseptron 1024kai
	for (int j=0;j<N_H2;j++) {
	// perseptron 1024->1
	z2[j] = 0.0f;
	for (int i=0;i<N_H1;i++) {
	// sum w*a1
	z2[j]+=w12[i][j]*a1[i];
	}
	// sum bias
	z2[j]+=b2[j];
	// activation function
	// relu
	a2[j]=relu(z2[j]);
	}

	// OUTPUT layer
	for (int j=0;j<N_OUTPUT;j++) {
	// perseptron 1024->1
	z3[j] = 0.0f;
	for (int i=0;i<N_H2;i++) {
	// sum w*a1
	z3[j]+=w23[i][j]*a2[i];
	}
	// sum bias
	z3[j]+=b3[j];
	}

	// activation function
	// softmax
	max = 0.0f;
	sum = 0.0f;
	// overflow avoidance
	for (int i=0; i<N_OUTPUT; i++) if(max < z3[i]) max = z3[i];
	for (int i=0; i<N_OUTPUT; i++) {
	a3[i] = exp(z3[i] - max);
	sum += a3[i];
	}
	for (int i=0; i<N_OUTPUT; i++) a3[i] /= sum;

	// loss function
	cost = 0.0f;
	// cross entropy error
	for (int i=0;i<10;i++) {
	cost += -teacher_buf[i]*log(a3[i]+1e-8);//overflow avoidance
	//cost += -teacher_buf[i]*std::log(a3[i]);
	}
	std::cout<<counter<<" epoch, cost "<<cost;
	for (int i=0;i<10;i++) {
	if (teacher_buf[i]==1){
	std::cout<<"  "<<i<<", output "<<a3[i]<<std::endl;
	accracy=a3[i];
}
}
std::cout<<"accracy = "<<accracy*100<<std::endl;
return 0;
*/
/*
   if (argc != 2)
   {
   printf("Usage: %s <image> \n", argv[0]) ;
   return -1 ;
   }

   FILE *input_file;
   FILE *output_file;

   size_t vector_size_bytes = sizeof(unsigned short) * Y_SIZE*X_SIZE;
   std::vector<unsigned short,aligned_allocator<unsigned short>>
   input_image(Y_SIZE*X_SIZE);

   std::vector<unsigned short,aligned_allocator<unsigned short>> output_image(Y_SIZE*X_SIZE);

// Read the bit map file into memory and allocate memory for the final image
std::cout << "Reading input image...\n";
// Load the input image
const char *imageFilename = argv[1];
input_file = fopen(imageFilename, "rb");
if (!input_file)
{
printf("Error: Unable to open input image file %s!\n",
imageFilename);
return 1;
}	
printf("\n");
printf("   Reading RAW Image\n");
size_t items_read = fread(input_image.data(), vector_size_bytes,1,input_file);
printf("   Bytes read = %d\n\n", (int)(items_read* sizeof input_image));

std::vector<cl::Device> devices = xcl::get_xil_devices();
cl::Device device = devices[0];
cl::Context context(device);

cl::CommandQueue q(context, device,CL_QUEUE_PROFILING_ENABLE);

std::string device_name = device.getInfo<CL_DEVICE_NAME>(); 
std::string binaryFile = xcl::find_binary_file(device_name,"krnl_affine");
cl::Program::Binaries bins = xcl::import_binary_file(binaryFile);
devices.resize(1);
cl::Program program(context, devices, bins);
cl::Kernel krnl(program,"affine_kernel");

std::vector<cl::Memory> inBufVec, outBufVec;
cl::Buffer imageToDevice(context,CL_MEM_USE_HOST_PTR | CL_MEM_READ_ONLY, vector_size_bytes, input_image.data());
cl::Buffer imageFromDevice(context,CL_MEM_USE_HOST_PTR | CL_MEM_WRITE_ONLY,vector_size_bytes, output_image.data());

inBufVec.push_back(imageToDevice);
outBufVec.push_back(imageFromDevice);

// Copy input vectors to memory
q.enqueueMigrateMemObjects(inBufVec,0);// 0 means from host

// Set the kernel arguments
krnl.setArg(0, imageToDevice);
krnl.setArg(1, imageFromDevice);
// Launch the kernel 
q.enqueueTask(krnl);

// Read back the image from the kernel
std::cout << "Reading output image and writing to file...\n";
output_file = fopen("transformed_image.raw", "wb");
if (!output_file)
{
printf("Error: Unable to open output image file!\n");
return 1;
}

q.enqueueMigrateMemObjects(outBufVec,CL_MIGRATE_MEM_OBJECT_HOST);
q.finish();

printf("   Writing RAW Image\n");
size_t items_written = fwrite(output_image.data(), vector_size_bytes, 1, output_file);
printf("   Bytes written = %d\n\n", (int)(items_written * sizeof output_image));
return 0 ;
*/
}
