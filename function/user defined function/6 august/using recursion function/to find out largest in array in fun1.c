//read and display(matrix)
//to find out largest in array in fun1.c
//2d array
#include<stdio.h>
//function proto
int largestmatrix(int a[3][3]);

//main fun.

  void main()
  {
      int matrix[3][3];
      //asking user
       printf("Enter 3x3 matrix elements:\n");
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              scanf("%d",&matrix[i][j]);

          }
      }
      //output
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              printf("%d",matrix[i][j]);

          }
          printf("\n");
      }


//      //nikalnu parni
//      int lm=largestmatrix(matrix,9);
//
//
//      printf("largest matrix=%d",lm);
//


    // Find largest element
    int largest = largestmatrix(matrix);
    printf("\nThe largest element in the matrix is: %d\n", largest);

    return 0;




  }
  //fun.definition
  //for only displaying or messaging fun definition fun.

  int largestmatrix(int a[3][3])
  {
      int largest=a[0][0];//index 0

      for(int i=1;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
             if(a[i][j]>largest)
          {
              largest=a[i][j];
          }
          }

      }

      return largest;


  }

