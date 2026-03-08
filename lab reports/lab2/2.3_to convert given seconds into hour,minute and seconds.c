/*
Title: WAP in C to convert given seconds into hour,minute and seconds
Author: Rosa lamichhane.
Date:6/12/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
     //declaration
     int hrs,min,sec;
     //initialization
     int total_seconds=3667;
     //processing.
     hrs=total_seconds/3600;
     min=(total_seconds%3600)/60;
     sec=(total_seconds%3600)%60;
     //display
     printf("The converted hrs is:%d\n",hrs);
     printf("The converted min is:%d\n",min);
     printf("The converted sec is :%d\n",sec);

     return 0;//status signal.
}//main scope

