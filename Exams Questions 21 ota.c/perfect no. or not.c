/*
Title: WAP in C to perfect no. or not.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
   int n,sum;
   sum=0;
   printf("Enter the n:");
   scanf("%d",&n);

   for(int i=1;i<n;i++)//not = because exactly n la i lai divide gardaina.
   {
       if(n%i==0)
       {
           sum=sum+i;
       }
   }
   if(n==sum)
   {
       printf("perfect no.");
   }
   else
  {
    printf("Not perfect no.");
   }




    return 0;//status signal.
}//main scope

