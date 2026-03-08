/*
Title: WAP in C to
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
  int n1,n2,flag;
  printf("Enter the no n1:");
  scanf("%d",&n1);
  printf("Enter the no n2:");
  scanf("%d",&n2);

//loop through all no from n1 to n2.
  for(int j=n1;j<=n2;j++)
  {
      flag=1;//assume prime.

      for(int i=2;i<=j/2;i++)//=will be beeter for half ,if not 1 no. will be missed.
      {
          if(j%i==0)
          {
              flag =0;//not prime
              break;
          }

      }

      if(flag==1 &&j>1)
      {
          printf("\n %d",j);
      }

  }





    return 0;//status signal.
}//main scope

