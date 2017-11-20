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

float w01[N_INPUT][N_H1];
float b1[N_H1];
float w12[N_H1][N_H2];
float b2[N_H2];
float w23[N_H1][N_OUTPUT];
float b3[N_OUTPUT];

float get_w01[N_INPUT][N_H1];
float get_b1[N_H1];
float get_w12[N_H1][N_H2];
float get_b2[N_H2];
float get_w23[N_H1][N_OUTPUT];
float get_b3[N_OUTPUT];

int main(){
   char filename[MAX_FILENAME]={"initial.weights"};
   int i,j;

   //****************initialize weight and bias*******************
   float mu=0.0f;
   // He initialization
   float sigma=sqrt(2.0f/N_INPUT);
   printf("w01 std=%f\n",sigma);
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++)
         w01[i][j] = rand_normal(mu,sigma);
   }
   for (i=0;i<N_H1;i++) {
      //b1[i] = rand_normal(mu,sigma);
      b1[i] = 0.0f;
   }
   // He initialization
   sigma=sqrt(2.0f/N_H1);
   printf("w12 std=%f\n",sigma);
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++)
         w12[i][j] = rand_normal(mu,sigma);
   }
   for (i=0;i<N_H2;i++) {
      //b2[i] = rand_normal(mu,sigma);
      b2[i] = 0.0f;
   }
   // He initialization
   sigma=sqrt(2.0f/N_H2);
   printf("w23 std=%f\n",sigma);
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++)
         w23[i][j] = rand_normal(mu,sigma);
   }
   for (i=0;i<N_OUTPUT;i++) {
      //b3[i] = rand_normal(mu,sigma);
      b3[i] = 0.0f;
   }
/*
   FILE *writefp;
   if ((writefp=fopen(filename,"wb"))==NULL) {
      printf("Can't open a file");
      return 1;
   }
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++) {
         fwrite(&w01[i][j],sizeof(w01[i][j]),1,writefp);
      }
   }
   for (i=0;i<N_H1;i++) {
      fwrite(&b1[i],sizeof(b1[i]),1,writefp);
   }
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++) {
         fwrite(&w12[i][j],sizeof(w12[i][j]),1,writefp);
      }
   }
   for (i=0;i<N_H2;i++) {
      fwrite(&b2[i],sizeof(b2[i]),1,writefp);
   }
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++) {
         fwrite(&w23[i][j],sizeof(w23[i][j]),1,writefp);
      }
   }
   for (i=0;i<N_OUTPUT;i++) {
      fwrite(&b3[i],sizeof(b3[i]),1,writefp);
   }
   fclose(writefp);

   FILE *readfp;
   if ((readfp = fopen(filename, "rb")) == NULL) {
      printf("Can't open a file.");
      return 1;
   }
   for (i=0;i<N_INPUT;i++) {
      for (j=0;j<N_H1;j++) {
         fread(&get_w01[i][j], sizeof(get_w01[i][j]), 1, readfp);
      }
   }
   for (i=0;i<N_H1;i++) {
      fread(&get_b1[i], sizeof(get_b1[i]), 1, readfp);
   }
   for (i=0;i<N_H1;i++) {
      for (j=0;j<N_H2;j++) {
         fread(&get_w12[i][j], sizeof(get_w12[i][j]), 1, readfp);
      }
   }
   for (i=0;i<N_H2;i++) {
      fread(&get_b2[i], sizeof(get_b2[i]), 1, readfp);
   }
   for (i=0;i<N_H2;i++) {
      for (j=0;j<N_OUTPUT;j++) {
         fread(&get_w23[i][j], sizeof(get_w23[i][j]), 1, readfp);
      }
   }
   for (i=0;i<N_OUTPUT;i++) {
      fread(&get_b3[i], sizeof(get_b3[i]), 1, readfp);
   }
   fclose(readfp);
*/
   write_weights(filename,w01,b1,w12,b2,w23,b3);
   get_weights(filename,get_w01,get_b1,get_w12,get_b2,get_w23,get_b3);


   for (int i=0;i<N_INPUT;i++) {
      for (int j=0;j<N_H1;j++)
         if (w01[i][j] !=get_w01[i][j])
            printf("error\n");
   }
   for (int i=0;i<N_H1;i++) {
         if (b1[i] !=get_b1[i])
            printf("error\n");
   }
   for (int i=0;i<N_H1;i++) {
      for (int j=0;j<N_H2;j++)
         if (w12[i][j] !=get_w12[i][j])
            printf("error\n");
   }
   for (int i=0;i<N_H2;i++) {
         if (b2[i] !=get_b2[i])
            printf("error\n");
   }
   for (int i=0;i<N_H2;i++) {
      for (int j=0;j<N_OUTPUT;j++)
         if (w23[i][j] !=get_w23[i][j])
            printf("error\n");
   }
   for (int i=0;i<N_OUTPUT;i++) {
         if (b3[i] !=get_b3[i])
            printf("error\n");
   }

   return 0;
}

