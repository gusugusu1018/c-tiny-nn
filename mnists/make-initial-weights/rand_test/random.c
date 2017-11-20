#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
   int i;

   printf("RAND_MAX=%d\n",RAND_MAX);
   //srand(10);
   //srand((unsigned)time(NULL));
   for(i=0;i<100;i++){  printf("%d\n",rand());  }
   return 0;
}

