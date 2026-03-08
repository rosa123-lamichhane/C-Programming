//a program to
//find factorial of integer N using recursion.
//
#include<stdio.h>
//fun.proto
int factorial(int n);
int main()
{
    int n;
    printf("n:");
    scanf("%d",&n);

    int f=factorial(n);//fun.calling
    printf("%d",f);


    return 0;
}
int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
        return n*factorial(n-1);
}




