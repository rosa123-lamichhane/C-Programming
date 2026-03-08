/*
Title: WAP in C to q9_same no print in rows.c in growing phase

Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{

////same in row
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<=i;j++)
//     {
//         printf(" %d ",i+1);
//     }
//
//     printf("\n");
// }

     //same no. in column
 for(int i=0;i<5;i++)
 {
     for(int j=0;j<=i;j++)
     {
         printf(" %d ",j+1);
     }

     printf("\n");
 }




    return 0;//status signal.
}//main scope

