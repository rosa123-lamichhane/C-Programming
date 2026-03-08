/*
Title: WAP in C find the no. is even or odd using ternary operator.c
Author: Rosa lamichhane.
Date:6/12/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
    //declaration
    int a;
    //initialization
    a=5;
    //using ternary operator
//    (a%2==0)?printf("Even"):printf("odd");//condition of even

       (a%2!=0)?printf("odd"):printf("Even");//condition of odd


   return 0;//status signal.
}//main scope

