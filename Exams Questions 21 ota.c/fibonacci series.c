/*
Title: WAP in C to fibonacci series.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   int n;
   int a=0,b=1,c=0;
   printf("Enter the no of terms:");
   scanf("%d",&n);

   printf("Fibonacci series:");

   for(int i=1;i<=n;i++)
   {
       printf("\n%d", a);

      c = a + b;         // Calculate next term
      a = b;             // Move forward
      b = c;


   }





    return 0;//status signal.
}//main scope

