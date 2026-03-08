//swap
#include<stdio.h>
int main()
{
  //a=10 b=20
  //exchange.
   int a;
   int b;
   int rev;

   printf("Enter two no:");
   scanf("%d%d",&a,&b);

//   //1 way: uing third variable
//
//   rev=a;//temp=10
//   a=b;//a=20
//    b=rev; //b=10
//    printf("The number a and b:%d \n %d",a,b);
//    return 0;

     //1 way:  without  uing third variable
        a=a+b;//a=30
        b=a-b;//b=10
        a=a-b;//a=20
         printf("The number a and b:%d \n %d",a,b);
          return 0;






    return 0;
}
