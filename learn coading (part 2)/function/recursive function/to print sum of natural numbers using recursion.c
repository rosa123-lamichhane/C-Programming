//c program to print sum of natural numbers using recursion
//start:1
//n term
//differ betwen fact or sum of natu
//sum:return natural(n-1)+n;
//fact:return natural(n-1)*n;
#include<stdio.h>
//proto
int natural(int n);
int main()
{
     int n;
    printf("Enter any no:");
    scanf("%d",&n);

    //fun.calling
    int natu_no=natural(n);
    printf("natural no:%d",natu_no);


     return 0;
}
int natural(int n)
{
    if(n==1)//base condition
    {
        return 1;
    }
    return natural(n-1)+n;
}


