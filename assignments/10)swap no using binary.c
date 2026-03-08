/*
Title: WAP in C
Author: Rosa lamichhane.
Date:6/12/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   int x=2,y=10;
   //processing
   x=x^y;
   y=x^y;
   x=x^y;
   //display
   printf("The value of x is :%d\n",x);
   printf("The value of y is :%d\n",y);


   return 0;//status signal.
}//main scope

