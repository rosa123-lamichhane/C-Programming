//add two matrix and find their sum.c of m*n
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the row & coloum(m*n):");
    scanf("%d%d",&m,&n);

    int A[m][n],B[m][n],sum[m][n];


    //input
    printf("Enter 1st matrix:\n");
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&A[i][j]);
       }
    }
    //input
    printf("Enter 2nd  matrix(b):\n");
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&B[i][j]);
       }
    }
    //sum

    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           sum[i][j]=A[i][j]+B[i][j];
       }
    }

    //dis
   printf("the sum is :\n");
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           printf("%d ",sum[i][j]);
       }
       printf("\n");
    }


    return 0;
}
