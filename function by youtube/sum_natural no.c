//sum_natural=1+2+3+.....+(n-1)+n
//sum_natural=sum_natural(n-1)+n
#include<stdio.h>
//function prototype
//int variable(datatype,datatype);
  int sum_natural(int);
//function definition
//int variable(datatype,datatype)

   int sum_natural(int n)

   {
//          if (n == 1)
//   {
//      return 1; //Base case: sum of first 1 number is 1
 //  }
    if (n <= 0)
        return 0;  // safe base case
    else
   {
      return sum_natural(n-1)+n;
   }
   }




//main body
int main()
{
    int a= 5;
    printf(" the sum_natural no %d is :%d",a,sum_natural(a));
    return 0;

}
