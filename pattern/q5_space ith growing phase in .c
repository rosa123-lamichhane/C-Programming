/*
Title: WAP in C to q5_space ith growing phase in .c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   for(int i=0;i<5;i++)
   {
       for(int k=0;k<5-i-1;k++)//Use: for(k = 0; k < rows - i - 1) for spaces.

//Use: for(j = 0; j <= i) for stars.
       {
           printf("  ");
       }
       for(int j=0;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
   }





    return 0;//status signal.
}//main scope

