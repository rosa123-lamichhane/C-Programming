/*
Title: WAP in C to calculate the average three numbers and display the result upto two(2) decimal place.
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
     float a,b,c ,average;//declaration
     a=10.5;//initialization
     b=20;
     c=30;
     //processing
     average=(a+b+c)/3;
     //output
     printf("The result of the average:%.2f",average);





    return 0;//status signal.
}//main scope

