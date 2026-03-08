/*
Title: WAP in C to find the no. is +ve,-ve or netural using ternary operator
Author: Rosa lamichhane.
Date:6/12/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
    //declaration
    int a;
    //initialization
    a=-2;
    //using ternary operator.
    (a>0)?printf("+ve"):(a<0)?printf("-ve"):printf("netural");
    //condition for netural:a==0


   return 0;//status signal.
}//main scope

