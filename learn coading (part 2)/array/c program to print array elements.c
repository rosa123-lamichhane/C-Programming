//c program to print array elements
//
#include<stdio.h>
int main()
{
    int n[5];
//    printf("Enter the how many element you want :");
//    scanf("%d",&a);

    printf("\nEnter array elements:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&n[i]);
    }


    printf("\n array elements:");
    for(int i=0;i<5;i++)
    {
       printf("%d",n[i]);
    }





    return 0;
}
