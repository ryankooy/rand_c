#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function for generating and returning random numbers. */
int* getRandom() {

   static int r[10];
   int i;

   /* Set the seed. */
   srand((unsigned) time(NULL));
  
   for (i = 0; i < 10; ++i) {
      r[i] = rand();
      printf("%d\n", r[i]);
   }

   return r;
}

int main() {

   int arr[10];
   int *p;
   int i;

   p = getRandom();
	
   for (i = 0; i < 10; i++) {
      arr[i] = *(p + i);
      printf("%d\n", arr[i]);
   }

   return 0;
}