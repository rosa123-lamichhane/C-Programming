//c program to print array elements in reverse order
//
#include<stdio.h>
int main()
{
    int n[5],rev;

    //input//multiple value halnu parda used loop
    printf("\nEnter array elements:");
    for(int i=0;i<4;i++)
    {
       scanf("%d",&n[i]);
    }

    //output >> logic
    printf("\n reverse of the array:");
    for(int i=4;i>=0;i--)//why??// 4 to 0 ok!!
    {
      printf("%d\n",n[i]);
    }




    return 0;
}
