//alpha & no.triangle.c
//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5


#include<stdio.h>
int main()
{

    for(int i=1;i<=5;i++)//outer loop -> no of lines= no of rows
    {

        for(int j=1;j<=i;j++)//inner loop -> no of stars in each line.=no . of columns
        {

            if(i%2==1)
            {
                printf("%d",j);
            }
            else
                printf("%c", j+64);

        }

      printf("\n");
    }




     return 0;
}
