#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NMAX 100

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
   int i,j;
   int epoch=10000;
   srand((unsigned)time(NULL));
   float mu=0.0f;
   float sigma=0.1f;

   float min=-sigma*5;
   float max=sigma*5;
   float dx = (max-min)/(float)NMAX;
   int hist[NMAX];
   for (i=0;i<NMAX;i++)
      hist[i] = 0;

   float random;
   for (j=0;j<epoch;j++) {
      random = rand_normal(mu,sigma);
      for (i=0;i<NMAX;i++) {
         if ((min+i*dx<random)&&(random<=min+(i+1)*dx))
            hist[i]++;
      }
   }
   for (i=0;i<NMAX;i++)
      printf("%d,%d\n",i,hist[i]);
   return 0;
}

