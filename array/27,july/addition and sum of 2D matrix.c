//addition and sum of 2D matrix.c
/* also adding even sum and odd sum*/
//to count even no. or odd one

//3*2 matrix
#include<stdio.h>
int main()
{
  int a[3][2];
  int sum=0;
  int e_sum=0,o_sum=0;
  int e_count=0,o_count=0;

  printf("Enter the 6 values:");

  //input
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<2;j++)
      {
          scanf("%d",&a[i][j]);// Corrected: one %d and one address
      }
  }
  //processing+ output
  printf("matrix is\n:");
  for(int i=0;i<3;i++)//row
  {
      for(int j=0;j<2;j++)//column
      {
          printf("%d ",a[i][j]);
          //for sum
          sum=sum+a[i][j];

          if(a[i][j]%2==0)
          {
             e_sum=e_sum+a[i][j];
             e_count++;
          }
          else
          {

             o_sum=o_sum+a[i][j];
             o_count++;
         }
      }
          printf("\n");
        }

          //cause sum came only one times do print outside the loop
    printf("\nthe sum:\n %d",sum);
    printf("\ne_sum:%d",e_sum);
     printf("\nodd_sum:%d",o_sum);
     printf("\nEven Count: %d", e_count);
    printf("\nOdd Count: %d\n", o_count);



    return 0;
}
