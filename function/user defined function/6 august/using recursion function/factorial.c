//factorial.c
//formula:return:n*(n-1)!
#include<stdio.h>
//function prototype
int facto(int n );//int is an agru.
//main function
void main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);

    int f =facto( num);
    printf("the factorial of %d is:%d",num,f);
    return 0;
}
//function define

int facto(int n)
{
    //recursion for -1
    if(n==0)
    {
        return 1;
    }
    else
    return n*facto(n-1);
}
