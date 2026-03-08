//q10_10101 pattern.c skewing phase
#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<5-i;j++)
        {
//            int pattern=(i+j+1)%2;
//            printf("%d ",pattern);//k print garni ?

           if(j%2==0)
            {
                printf("1");
            }

            else
            {
                printf("0");
            }
        }

        printf("\n");
    }


//others wayyyyyyyyyyy
//    for(int i=1;i<5;i++)
//    {
//        for(int k=1;k<=i;k++)
//        {
//            printf(" ");
//        }
//        for(int j=i;j<=5;j++)
//        {
//            if(j%2==1)
//            {
//                printf("1");
//            }
//
//            else
//            {
//                printf("0");
//            }
//
//
//
//        printf("\n");
//    }



//



    return 0;
}
