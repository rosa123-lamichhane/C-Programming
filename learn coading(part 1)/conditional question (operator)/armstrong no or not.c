//armstrong no or not.c
//input :153>>3 digit:1*1*1+5*5*5+3*3*3=153
#include<stdio.h>
int main()
{
    int n,c,arm=0,r;
    printf("Enter any no:");
    scanf("%d",&n);

    c=n;//store

    while(n>0)
    {
        r=n%10;
        arm=arm + (r*r*r);
        n=n/10;
    }
    if(c==arm)
    {
        printf("armstrong no.");
    }
    else{
        printf("not armstrong no.");
    }


     return 0;
}
