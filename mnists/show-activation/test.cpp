#include <list>
#include <vector>
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
#define HIST_NMAX	10

#include "../data/mnist.h"
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

float relu(float a) {
   return a > 0.0f ? a:0.0f;
}

float diff_relu(float a) {
   return a > 0.0f ? 1.0f:0.0f;
}

float data[N_INPUT];

float w01[N_INPUT][N_H1];
float b1[N_H1];
float z1[N_H1];
float a1[N_H1];
float delta_1[N_H1];

float w12[N_H1][N_H2];
float b2[N_H2];
float z2[N_H2];
float a2[N_H2];
float delta_2[N_H2];

float w23[N_H1][N_OUTPUT];
float b3[N_OUTPUT];
float z3[N_OUTPUT];
float a3[N_OUTPUT];
float delta_3[N_OUTPUT];

float teacher_buf[10];

int main(){
   int epoch = 1;
   float eta = 0.01f;

   printf("init dataset...\n");
   std::vector<std::vector<float> > train_data;
   std::vector<float> label_data;
   Mnist mnist;
   train_data = mnist.readTrainingFile("../data/train-images-idx3-ubyte");
   label_data = mnist.readLabelFile("../data/train-labels-idx1-ubyte");

   char initial_file[MAX_FILENAME]={"initial.weights"};

   float max = 0.0f;
   float sum = 0.0f;
   float cost = 0.0f;

   int hist[HIST_NMAX];
   for (int i=0;i<HIST_NMAX;i++) {
      hist[i]=0;
   }
   float dx=1.0f/(float)HIST_NMAX;

   //****************initialize weight and bias*******************
   get_weights(initial_file,w01,b1,w12,b2,w23,b3);

   for (int counter=0;counter<epoch;counter++) {
      //*************************forward****************************
      // standlize
      for (int j=0;j<28*28;j++) {
         data[j] = train_data[counter][j]/255;
      }
      // convert teacher to one-hot expression
      // if (label==0) teacher_buf={1,0,0,0,0,0,0,0,0,0};
      // if (label==1) teacher_buf={0,1,0,0,0,0,0,0,0,0};
      // if (label==2) teacher_buf={0,0,1,0,0,0,0,0,0,0};
      // if (label==3) teacher_buf={0,0,0,1,0,0,0,0,0,0};
      //
      // if (label==9) teacher_buf={0,0,0,0,0,0,0,0,0,1};
      for (int i=0;i<10;i++) {
         if (label_data[counter] == i) {
            teacher_buf[i]=1;
         } else {
            teacher_buf[i]=0;
         }
      }

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
         for (int i=0;i<HIST_NMAX;i++) {
            if ((i*dx<=a1[j])&&(a1[j]<(i+1)*dx)){
               hist[i]++;
            }
         }
      }
      //*************************fin 1 epoch****************************
   }
   for (int i=0;i<HIST_NMAX;i++) {
      std::cout<<i<<" "<<hist[i]<<std::endl;
   }
   return 0;
}

