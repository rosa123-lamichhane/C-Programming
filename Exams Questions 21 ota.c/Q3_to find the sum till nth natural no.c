/*
Title: WAP in C to Q3_to find the sum till nth natural no.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{

   int n;
   int sum=0;
   printf("Enter the no.till nth term:");
   scanf("%d",&n);

//       if(n>0)
//
//       {
//           sum =((n*(n+1)/2));
//           printf(" sum of no is natural no. %d",sum);
//       }
//
//    else
//        printf("not");
////

       for(int i=1;i<=n;i++)//natural no start by 1.
       {
           sum=sum+i;

       }

     printf("%d",sum);



    return 0;//status signal.
}//main scope

