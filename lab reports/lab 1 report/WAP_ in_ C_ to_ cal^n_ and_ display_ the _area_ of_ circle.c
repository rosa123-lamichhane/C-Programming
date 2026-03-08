/*
Title: WAP in C to cal^n and display the area of circle.
Author: Rosa lamichhane.
Date:5/29/2025
     */

     //formula : pi*r^2

#include<stdio.h>//preprocessor directive
#define PI 3.14
#include<math.h>//for power
int main()//entry point of c
{
     int radius;//declaration
     float area;
    //initialization
     radius=7;
     area=PI*pow(radius,2);//processing
     //output
     printf("The area of circle is :%.2f\n",area);





    return 0;//status signal.
}//main scope

