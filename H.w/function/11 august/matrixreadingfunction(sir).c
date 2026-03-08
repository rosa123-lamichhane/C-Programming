//matrix reading & writing function(sir).c
#include<stdio.h>
//fun. prototype
void read(int row,int column,int m[row][column]);
void write(int row,int column,int m[row][column]);
void main()
{
    int m[2][2];
    printf("Enter the matrix values:");


    read(2,2,m);
    write(2,2,m);

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
