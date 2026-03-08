//*
//***
//*****
//using function

#include<stdio.h>

void print_pattern()
{
    for(int i=0;i<3;i++)
    {
//        if i=0=n1 star.
//            if i= 1=n 3 star.
//            if i= 2=n 5star.

    //(2*i+1)// odd 1 3 5

        for(int j=0;j<2*i+1;j++)
        {
            printf("*");
        }
         printf("\n");
    }

}

//main fun.
int main()
{
      print_pattern();
    return 0;
}
