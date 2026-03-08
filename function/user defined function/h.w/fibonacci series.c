//fibonacci series.c using function
//takes argu., takes return.
#include<stdio.h>
//calling fun.
// Function prototype (once)l
int next(int a,int b);//declare

void main()
{
   int n;
   printf("Enter the limit n:");
   scanf("%d",&n);

   int a,b,next_val;
   a=0,b=1;
   printf("Fibonacci series:");

   //repation
   for(int i=0;i<n;i++)
   {
       printf("%d\n",a);
     next_val=next(a,b);
      a=b;
      b=next_val;



   }

}
//called fun.
//return
// Function definition
  int next(int a,int b)//fun. declaration
  {

    return a + b;


  }
