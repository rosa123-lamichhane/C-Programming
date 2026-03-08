//no. square.c
//n=4>> no. of lines
//1 2 3 4//logic ::print i  ok ??
//1 2 3 4
//1 2 3 4
//1 2 3 4
//n=5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5

#include<stdio.h>
int main()
{
    int n;
    printf("ENter a no. of rows:");
    scanf("%d",&n);

    //******...upto n no of stars
    //to printf n no of stars alag alag
    for(int i=1;i<=n;i++)//
    {
        for(int j=1;j<=n;j++)//1 2 3 4 ...
        {
           printf("%d  ",j);//
        }

      printf("\n");
    }

     return 0;
}
