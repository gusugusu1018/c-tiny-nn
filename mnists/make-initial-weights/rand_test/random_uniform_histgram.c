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
   int i,j;
   int epoch=1000;

   srand((unsigned)time(NULL));
   int hist[NMAX];
   for (i=0;i<NMAX;i++)
      hist[i] = 0;
   float dx = 1.0f/(float)NMAX;
   float random;
   for (j=0;j<epoch;j++) {
      random = rand_uniform();
      for (i=0;i<NMAX;i++) {
         if ((i*dx<random)&&(random<=(i+1)*dx))
            hist[i]++;
      }
   }
   for (i=0;i<NMAX;i++)
      printf("%d,%d\n",i,hist[i]);
   return 0;
}

