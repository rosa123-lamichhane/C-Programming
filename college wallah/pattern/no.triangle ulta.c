//no.triangle ulta
//1 2 3 4
//1 2 3
//1 2
//1

//

#include<stdio.h>
int main()
{
//        int n;
//    printf("ENter a no. of rows:");
//    scanf("%d",&n);
//    //******...upto n no of stars
//    //to printf n no of stars alag alag
    for(int i=1;i<=4;i++)//outer loop -> no of lines= no of rows
    {
        for(int j=1;j<=4+1-i;j++)//inner loop -> no of stars in each line.=no . of columns
        {
           printf("%d",j);
        }

      printf("\n");
    }




     return 0;
}

