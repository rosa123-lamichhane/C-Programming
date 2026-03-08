//q6_piramind one.c growing phrase.
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)//row
    {
        for(int k=0;k<5-i-1;k++)//space
        {
            printf("  ");
        }
        for(int j=0;j<2*i+1;j++)//column
        {
            printf("* ");//k print garni ?
        }

        printf("\n");
    }


    return 0;
}
