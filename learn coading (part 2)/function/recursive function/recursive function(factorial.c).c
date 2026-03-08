//recursive function.c
//factorial.c
//
#include<stdio.h>
//fun.prototype
int factorial(int a);
//function defination
 int factorial(int a)
 {
     //logic
     if(a==0||a==1)//in base condition:
     {
         return 1;
     }
     return a*factorial(a-1);
 }
int main()
{
     int n;
    printf("Enter any no:");
    scanf("%d",&n);

    //fun.calling
    int f=factorial(n);
    printf("the factorial is:%d\n",f);



     return 0;
}



