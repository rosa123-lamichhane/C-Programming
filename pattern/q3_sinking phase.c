//skewing phase
#include<stdio.h>
int main()
{
  for(int i=0;i<5;i++)//row
  {
      for(int j=0;j<5-i;j++)//column //where 5 is row
      {
          printf("* ");
      }
      printf("\n");
  }


  return 0;
}
