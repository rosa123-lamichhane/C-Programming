/*
Title: WAP in C to no. is factorial.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{

   int n;
   int fact=1;
   printf("Enter the no.till nth term:");
   scanf("%d",&n);



       for(int i=1;i<=n;i++)//natural no start by 1.
       {
           fact=fact*i;

       }

     printf("%d",fact);



    return 0;//status signal.
}//main scope

