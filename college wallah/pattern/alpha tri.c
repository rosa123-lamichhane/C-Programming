//        A
//      A B
//    A B C
// A B C D

#include<stdio.h>
int main()
{


    for(int i=1;i<=4;i++)//outer loop -> no of lines= no of rows
    {
        int a =1;
        for(int k=1;k<=4-1;k++)//inner loop -> no of stars in each line.=no . of columns
        {


                printf("  ");
        }


        for(int j=1;j<=i;j++)//inner loop -> no of stars in each line.=no . of columns
        {
            int d=a+64;
            char ch=(char)d;



                printf("%c", ch);
                a++;

        }

      printf("\n");
    }




     return 0;
}

