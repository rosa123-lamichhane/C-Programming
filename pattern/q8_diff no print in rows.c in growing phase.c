/*
Title: WAP in C to q8_diff no print in rows.c in growing phase
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{

 int count =1;//global counter

 for(int i=0;i<5;i++)
 {
     for(int j=0;j<=i;j++)
     {
         printf(" %d ",count);
         count ++;
     }

     printf("\n");
 }




    return 0;//status signal.
}//main scope

////Because:
//
//count doesn’t restart.
//
//It just increases every time a number is printed.
//
//You get natural counting: 1, 2, 3, 4... etc.
//
//
//Because:
//
//count doesn’t restart.
//
//It just increases every time a number is printed.
//
//You get natural counting: 1, 2, 3, 4... etc.




