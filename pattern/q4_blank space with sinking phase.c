/*
Title: WAP in C to q4_ agadi ko blank space with sinking phase.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
  for(int i=0;i<5;i++)//row
  {
      for(int k=0;k<i;k++)//blank space
      {
          printf("  ");
      }
      for(int j=0;j<5-i;j++)
      {
          printf("* ");//k printf garni
      }

      printf("\n");
  }





    return 0;//status signal.
}//main scope

