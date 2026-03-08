//C Program to Calculate Sum of Array Elements
//n[5]=10 20 30 40 50 =150
//logic:loop>>multiple value halnu parda used loop
#include<stdio.h>
int main()
{
    int n[5],sum=0;

    //input//multiple value halnu parda used loop
    printf("\nEnter array elements:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&n[i]);
    }

    //output
    printf("\n sum of the array:");
    for(int i=0;i<5;i++)
    {
       sum=sum+n[i];
    }
    printf("%d",sum);
    return 0;
}
