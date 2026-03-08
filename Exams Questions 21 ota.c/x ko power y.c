/*
Title: WAP in C to x ko power y.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
#include<stdlib.h>//for abs
int main()//entry point of c
{
  int x,y;
  float result=1;
  printf(" the value of x:");
  scanf("%d",&x);
  printf(" the valu of y:");
  scanf("%d",&y);

  for(int i=1;i<=abs(y);i++)
  {
      result=result*x;
  }

  if(y>0)
    printf("The result:%.3f",result);
  else
  {
       printf("The result:%.3f",(1/result));
  }


    return 0;//status signal.
}//main scope

