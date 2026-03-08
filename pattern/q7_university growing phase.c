/*
Title: WAP in C to q7_university growing phase.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
  char word[]="UNIVERSITY";

  for(int i=0;i<10;i++)//row
  {
      for(int j=0;j<=i;j++)//column
      {
          printf("%c",word[i]);
      }
      printf("\n");
  }





    return 0;//status signal.
}//main scope

