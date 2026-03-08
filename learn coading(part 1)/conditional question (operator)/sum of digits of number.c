//sum of digits of number
//inputs 123=1+2+3=6
#include<stdio.h>
int main()
{
    int n,sum,r=0;
    printf("Enter any no:");
    scanf("%d",&n);//123

    while(n>0)//12>0
    {
        r=n%10;//123%10=3//2/
        sum=sum+r;//0+3=3//5//
        n=n/10;//12//1
    }
    printf(" sum of  digits :%d",sum);

     return 0;
}
