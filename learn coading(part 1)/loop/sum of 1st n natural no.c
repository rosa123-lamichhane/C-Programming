//sum of 1st n natural no.c
//n*(n-1)/2
//in:5
//out:1+2+3+4+5=15.
// But for natural numbers, always start from 1, so your logic and math are clean and matching the definition.


#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter any no(limit):");
    scanf("%d",&n);//7//10
    printf("The sum of 1st n natural no:");

//    //without using loop
//    sum=n*(n+1)/2;
//    printf("%d",sum);

    //using loop
    for(int i=1;i<=n;i++)//1<=10
    {
        sum=sum+i;//0+0

    }
    printf("sum of n natural no:%d",sum);





    return 0;
}

