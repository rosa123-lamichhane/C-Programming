//perfect or not
//6=1 2 3 4 5 (small)//1 2 3(all la purai divide hunxa)(1 kam)
//perfect no: 1 +2+ 3=6
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter any no:");
    scanf("%d",&n);

    //loop
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    if(sum==n)
    {
        printf("perfect no.");

    }
    else{
        printf("not perfect no.");
    }


     return 0;
}

