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
#define MAX_FILENAME 30

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

float Delta_w01[N_INPUT][N_H1];
float Delta_b1[N_H1];
float Delta_w12[N_H1][N_H2];
float Delta_b2[N_H2];
float Delta_w23[N_H2][N_OUTPUT];
float Delta_b3[N_OUTPUT];

float teacher_buf[10];

int main(){
   int epoch = 600;
   float eta = 0.001f;
   int batch_size = 32;
   char initial_file[MAX_FILENAME]={"initial.weights"};
   char save_file[MAX_FILENAME]={"new.weights"};
   std::cout<<"init dataset..."<<std::endl;
   std::vector<std::vector<float> > train_data;
   std::vector<float> label_data;
   Mnist mnist;
   train_data = mnist.readTrainingFile("../data/train-images-idx3-ubyte");
   label_data = mnist.readLabelFile("../data/train-labels-idx1-ubyte");
   float max = 0.0f;
   float sum = 0.0f;
   float cost = 0.0f;

   int i,j,k;
   //****************initialize weight and bias*******************
   get_weights(initial_file,w01,b1,w12,b2,w23,b3);
   // w23
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++) {
         Delta_w23[i][j]=0.0f;
      }
   }
   // b3
   for (j=0;j<N_OUTPUT;j++) {
      Delta_b3[j]=0.0f;
   }
   // w12
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++) {
         Delta_w12[i][j]=0.0f;
      }
   }
   // b2
   for (j=0;j<N_H2;j++) {
      Delta_b2[j]=0.0f;
   }
   // w01
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++) {
         Delta_w01[i][j]=0.0f;
      }
   }
   // b1
   for (j=0;j<N_H1;j++) {
      Delta_b1[j]=0.0f;
   }

   //int counter=0;
   for (int e_counter=0;e_counter<epoch;e_counter++) {
      //#pragma omp parallel for
      for (int b_counter=0;b_counter<batch_size;b_counter++) {
         //*************************forward****************************
         // standlize
         for (int j=0;j<28*28;j++) {
            //data[j] = train_data[counter][j]/255;
            data[j] = train_data[e_counter*batch_size+b_counter][j]/255;
         }
         // convert teacher to one-hot expression
         // if (label==0) teacher_buf={1,0,0,0,0,0,0,0,0,0};
         // if (label==1) teacher_buf={0,1,0,0,0,0,0,0,0,0};
         // if (label==2) teacher_buf={0,0,1,0,0,0,0,0,0,0};
         // if (label==3) teacher_buf={0,0,0,1,0,0,0,0,0,0};
         //
         // if (label==9) teacher_buf={0,0,0,0,0,0,0,0,0,1};
         for (int i=0;i<10;i++) {
            //if (label_data[counter] == i) {
            if (label_data[e_counter*batch_size+b_counter] == i) {
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
            a3[i] = std::exp(z3[i] - max);
            sum += a3[i];
         }
         for (int i=0; i<N_OUTPUT; i++) a3[i] /= sum;

         // loss function
         cost = 0.0f;
         // cross entropy error
         for (int i=0;i<10;i++) {
            cost += -teacher_buf[i]*std::log(a3[i]+1e-8);//overflow avoidance
            //cost += -teacher_buf[i]*std::log(a3[i]);
         }
         if (b_counter==0)
            std::cout<<e_counter*batch_size+b_counter<<" epoch, cost "<<cost<<std::endl;
            //std::cout<<counter<<" epoch, cost "<<cost<<std::endl;

         //counter++;

         //*************************backward****************************
         // 3
         for (int k=0;k<N_OUTPUT;k++) {
            delta_3[k]=(a3[k]-teacher_buf[k]);
         }
         // 2
         for (int j=0;j<N_H2;j++) {
            delta_2[j]=0.0f;
            for (int k=0;k<N_OUTPUT;k++) {
               delta_2[j]+=delta_3[k]*w23[j][k]*diff_relu(z2[j]);
            }
         }
         // 1
         for (int j=0;j<N_H1;j++) {
            delta_1[j]=0.0f;
            for (int k=0;k<N_H2;k++) {
               delta_1[j]+=delta_2[k]*w12[j][k]*diff_relu(z1[j]);
            }
         }
         //*************************batch weight and bias****************************

         // w23
         for (int i=0;i<N_H2;i++) {
            for (int j=0;j<N_OUTPUT;j++) {
               Delta_w23[i][j] += delta_3[j]*a2[i];
            }
         }
         // b3
         for (int j=0;j<N_OUTPUT;j++) {
            Delta_b3[j] += delta_3[j];
         }
         // w12
         for (int i=0;i<N_H1;i++) {
            for (int j=0;j<N_H2;j++) {
               Delta_w12[i][j] += delta_2[j]*a1[i];
            }
         }
         // b2
         for (int j=0;j<N_H2;j++) {
            Delta_b2[j] += delta_2[j];
         }
         // w01
         for (int i=0;i<N_INPUT;i++) {
            for (int j=0;j<N_H1;j++) {
               Delta_w01[i][j] += delta_1[j]*data[i];
            }
         }
         // b1
         for (int j=0;j<N_H1;j++) {
            Delta_b1[j] += delta_1[j];
         }
         }
         //*************************update weight and bias****************************
         // w23
         for (int i=0;i<N_H2;i++) {
            for (int j=0;j<N_OUTPUT;j++) {
               w23[i][j] = w23[i][j] - eta*Delta_w23[i][j];
               Delta_w23[i][j]=0.0f;
            }
         }
         // b3
         for (int j=0;j<N_OUTPUT;j++) {
            b3[j] = b3[j] - eta*Delta_b3[j];
            Delta_b3[j]=0.0f;
         }
         // w12
         for (int i=0;i<N_H1;i++) {
            for (int j=0;j<N_H2;j++) {
               w12[i][j] = w12[i][j] - eta*Delta_w12[i][j];
               Delta_w12[i][j]=0.0f;
            }
         }
         // b2
         for (int j=0;j<N_H2;j++) {
            b2[j] = b2[j] - eta*Delta_b2[j];
            Delta_b2[j]=0.0f;
         }
         // w01
         for (int i=0;i<N_INPUT;i++) {
            for (int j=0;j<N_H1;j++) {
               w01[i][j] = w01[i][j] - eta*Delta_w01[i][j];
               Delta_w01[i][j]=0.0f;
            }
         }
         // b1
         for (int j=0;j<N_H1;j++) {
            b1[j] = b1[j] - eta*Delta_b1[j];
            Delta_b1[j]=0.0f;
         }
         //*************************fin 1 epoch****************************
      }
      write_weights(save_file,w01,b1,w12,b2,w23,b3);
      return 0;
   }

