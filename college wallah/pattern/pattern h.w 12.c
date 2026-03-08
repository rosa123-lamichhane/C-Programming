//1
//3 5
//7 9 11
//13 15 17 19
#include<stdio.h>
int main()
{
    int a =1;

    for(int i=1;i<=4;i++)//outer loop -> no of lines= no of rows
    {

        for(int j=1;j<=i;j++)//inner loop -> no of stars in each line.=no . of columns
        {


                printf("%d", a);
                a+=2;

        }

      printf("\n");
    }




     return 0;
}

