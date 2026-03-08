//read and display(matrix)
#include<stdio.h>
//function proto
int dismatrix();

//main fun.
  void main()
  {

      printf("Enter the matrix:");

      dismatrix();



  }
  //fun.definition
  //for only displaying or messaging fun definition fun.

  int dismatrix()
  {
      int matrix[2][2];
      //asking user
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              scanf("%d",&matrix[i][j]);

          }
      }
      //output
      for(int i=0;i<2;i++)
      {
          for(int j=0;j<2;j++)
          {
              printf("%d",matrix[i][j]);

          }
          printf("\n");
      }

  }

