#include <cstdlib>
//#include "cpp-sum.h"
//#include "c-sum.h"


extern "C" {int sum_abs(const int * const in, const int num) {
   int sum=0;
   for (int i=0; i < num; ++i) {
       sum += abs(in[i]);
   }
   return sum;
}
 }
