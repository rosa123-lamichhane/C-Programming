/*
Title: WAP in C to reverse the n0.
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   int n,rem ,rev;
   rev=0;
   printf("Enter the n:");
   scanf("%d",&n);

   while(n!=0)
   {
       rem=n%10;//gives last digit
       rev=rev*10+rem;
       n=n/10;

   }

   printf("\n the reverse no is:%d",rev);



    return 0;//status signal.
}//main scope

