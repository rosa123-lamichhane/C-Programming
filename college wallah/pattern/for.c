//

#include<stdio.h>
int main()
{
        int n;
    printf("ENter a no. of rows:");
    scanf("%d",&n);
    //******...upto n no of stars
    //to printf n no of stars alag alag
    for(int i=1;i<=n;i++)//outer loop -> no of lines= no of rows
    {
        for(int j=1;j<=n;j++)//inner loop -> no of stars in each line.=no . of columns
        {
           printf("?");
        }

      printf("\n");
    }




     return 0;
}
