//c program to print matrix
//addition and sum of 2D matrix.c
/* also adding even sum and odd sum*/
//to count even no. or odd one

//3*2 matrix
#include<stdio.h>
int main()
{
  int a[2][2];


  printf("Enter the matrix elements:");

  //input
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);// Corrected: one %d and one address
      }
  }
  //processing+ output//in matrix form
  printf("\nmatrix is:");
  for(int i=0;i<3;i++)//row
  {
      for(int j=0;j<2;j++)//column
      {
          printf("%d ",a[i][j]);

          }


          printf("\n");
        }



    return 0;
}
