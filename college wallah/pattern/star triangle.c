//star triangle.c
//n=4
//*:1line
//**2
//mati n=2
//***3
//****4
#include<stdio.h>
int main()
{
    int n;
    printf("ENter a no. of rows:");
    scanf("%d",&n);

    //******...upto n no of stars
    //to printf n no of stars alag alag
    for(int i=1;i<=n;i++)//
    {
        for(int j=1;j<=i;j++)//No::: not n i is there
        {
           printf("*");//
        }

      printf("\n");
    }

     return 0;
}
