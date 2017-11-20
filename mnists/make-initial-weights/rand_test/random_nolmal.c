#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NMAX 10

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
   int i;
   float mu=0.0f;
   float sigma=0.1f;

   srand((unsigned)time(NULL));
   for(i=0;i<100;i++){  printf("%f\n",rand_normal(mu,sigma));  }
   return 0;
}

