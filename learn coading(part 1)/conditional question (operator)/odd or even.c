//odd or even
//2,4,6,8....=even
//1 3 5 7 9 ...=odd
/*
Title: WAP in C to
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
//    int n;
//    printf("ENter the no:");
//    scanf("%d",&n);
//
//
//    if(n%2==0)
//    {
//        printf("the no%d is :even",n);
//    }
//    else
//    {
//        printf("The no. of %d is : odd",n);
//    }
//


//without using % operator
    int n,m;
    printf("ENter the no:");
    scanf("%d",&n);
     m=n/2;

    if(m*2==n)
    {
        printf("the no%d is :even",n);
    }
    else
    {
        printf("The no. of %d is : odd",n);
    }




    return 0;//status signal.
}//main scope

