//to print transpose of a matrix
//transpose:row==colum;coloum>>row.


#include<stdio.h>
int main()
{
  int a[2][2],trans[2][2];


  printf("Enter the matrix elements:");

  //input
  for(int i=0;i<2;i++)//row
  {
      for(int j=0;j<2;j++)//coloum
      {
          scanf("%d",&a[i][j]);// Corrected: one %d and one address
      }
  }



   // Display original matrix
  printf("\nmatrix is:");
  for(int i=0;i<2;i++)//row
  {
      for(int j=0;j<2;j++)//column
      {
          printf("%d ",a[i][j]);

          }


          printf("\n");
        }


  for(int i=0;i<2;i++)//row
  {
      for(int j=0;j<2;j++)//column
      {
         trans[j][i]=a[i][j];


          }


          printf("\n");
        }

  printf("\n transpose matrix is:");
  for(int i=0;i<2;i++)//row
  {
      for(int j=0;j<2;j++)//column
      {

         printf("%d ",trans[i][j]);//used other loop.

          }


          printf("\n");
        }




    return 0;
}

