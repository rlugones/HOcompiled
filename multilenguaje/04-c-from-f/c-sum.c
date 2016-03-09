#include <stdlib.h>
#include "c-sum.h"

void sum_abs_(int *in, int *num, int *asum) {
   int i;
   int sum;

   for (i=0,*asum=0; i < *num; ++i) {
       *asum += abs(in[i]);
   }
}
 
