#include<stdio.h>
//fun.prototype
int iseven(int n);

//main fun.
void main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);


    int e =iseven(num);
     if(e==0)
     {
         printf("the numner %d is :odd",num);

     }
     else
     {
         printf("the numner %d is :even",num);
     }
     return 0;

}

  int iseven(int n)
  {
      if(n%2==0)
      {
          return 1;//even
      }
      else
      {
          return 0;
      }
  }
