/*
Title: WAP in C to find the largest among three given different number using ternary operator.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
    //declaration
    int a,b,c;
    //initialization
    a=-5,b=10,c=20;
    //using ternary operator :
    //syntax:Condition? True expression:False expression;

    (a>b&&a>c)?printf("a"):(b>a&&b>c)?printf("b"):printf("c");

    return 0;//status signal.
}//main scope

