/*
Title: WAP in C to convert the given celsius value to fahrenheit  and kelvin
Author: Rosa lamichhane.
Date:5/29/2025
     */
//f=(9/5)C+32 and k=C+273.1

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
    //declaration
    float c,f,k;
    //initialization
    c=15.5;
    //processing
    f=((float)9/5)*c+32;
    k=c+273.1;
    //Display
    printf("The fahrenheit value:%.2f\n",f);
    printf("The value of kelvin:%.2f\n",k);


     return 0;//status signal.
}//main scope

