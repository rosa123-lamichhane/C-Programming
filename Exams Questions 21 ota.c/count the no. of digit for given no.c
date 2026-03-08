/*
Title: WAP in C to count the no. of digit for given no.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   int n,count;
   printf("Enter the n:");
   scanf("%d",&n);

   do
   {
       n=n/10;
       count++;


   }while(n!=0);


    printf("%d",count);


    return 0;//status signal.
}//main scope

