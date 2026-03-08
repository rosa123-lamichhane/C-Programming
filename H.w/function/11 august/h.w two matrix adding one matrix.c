//h.w two matrix adding one matrix.c
//matrix reading & writing function(sir).c
#include<stdio.h>
//fun. prototype
void read(int row,int column,int m[row][column]);
void write(int row,int column,int m[row][column]);
void addmatrix(int row,int column,int m1[row][column],int m2[row][column],int sum[row][column]);
void main()
{
   int i,j;
    int m1[3][3],m2[3][3],sum[3][3];

    printf("Enter the 1st matrix values:");
    read(3,3,m1);

   printf("Enter the 2nd matrix values:");
    read(3,3,m2);

    printf("the first matrix:\n");
    write(3,3,m1);

    printf("the 2nd matrix:\n");
    write(3,3,m2);

    addmatrix(3,3,m1,m2,sum);

    printf("the sum of matrix:");
    write(3, 3, sum);


}
void read(int row,int column,int m[row][column])//scanf
{
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
          scanf("%d",&m[i][j]);
       }

   }
}
void write(int row,int column,int m[row][column])
{
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
          printf("%d\t",m[i][j]);
       }
       printf("\n");

   }
}
void addmatrix(int row,int column,int m1[row][column],int m2[row][column],int sum[row][column])
{
    for(int i=0;i<row;i++)
   {
       for(int j=0;j<column;j++)
       {
          sum[i][j]=(m1[i][j]+m2[i][j]);

       }



   }
}

