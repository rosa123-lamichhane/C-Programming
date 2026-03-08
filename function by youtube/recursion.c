#include<stdio.h>
//factorial
//function prototype
int factorial(int);

//function definition
int factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return factorial(n-1)*n ;
}

//main body
int main()
{
    int a= 10;
    printf("The factorial of %d is:%d",a,factorial(a) );
    return 0;

}
