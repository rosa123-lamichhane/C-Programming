#include <stdio.h>
//wrong
//int main() {
//    int  sum_natural=0 ;
//    for (int i = 1; i <= 100; i++) {
////        sum = sum + i;
//        //sum_natural=sum_natural(i-1)+i;(wrongggg)
//       // sum_natural=sum_natural+i;
//
//    }
//   // printf("Sum of natural numbers 1 to 100 = %d\n", sum);
//    printf("Sum of natural numbers 1 to 100 = %d\n", sum_natural);
//    return 0;
//}
/*using formula*/
int main() {
    int n=100, sum_natural=0 ;
    sum_natural=n*(n+1)/2;

    printf("Sum of natural numbers 1 to 100 = %d\n", sum_natural);
    return 0;
}
