//number is palindrome or not .c
//input=121>>>121(same input=ouput)
#include<stdio.h>
void main()
{
    int n,c,sum,r=0;
    printf("Enter any no:");
    scanf("%d",&n);

     c=n;
    while(n>0)
    {
        r=n%10;
     sum=r+(sum*10);
     n=n/10;

    }
    if(c==sum)
    {
        printf("palindrome no.");
    }
    else
        printf(" not palindrome no.");




     return 0;
}
