//input 5=5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no:");
    scanf("%d",&n);
    printf("The multiplication table:");

    //using loop
    //we are doing 5*1,5*2...5*10;
    for(int i=1;i<=10;i++)
    {
//        printf(" %d\n",n*i);
          printf("%d*%d=%d\n",n,i,n*i);
    }

   return 0;
}

