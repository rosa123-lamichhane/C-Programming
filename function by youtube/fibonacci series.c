//fibonacci series.c
//0,1,1,2
//only gives me value ok
//formula?= fibonacci(n)=fibonacci(n-1)+fibonacci(n-2)
#include<stdio.h>
//function prototype
//int variable(datatype,datatype);
 int fibonacci(int);


//function definition
//int variable(datatype,datatype)
int fibonacci(int n)
{
    if(n==1||n==2)
    {
        return (n-1);
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

//main body
int main()
{
    int a= 5;
    printf("the value of fibonacci series at %d is:%d ",a,fibonacci(a));
    return 0;

}
