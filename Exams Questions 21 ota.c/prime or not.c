/*
Title: WAP in C to prime or not.c
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
//   //a. prime or not in simple code not optimize format.
//   int n;
//   int factor=0;
//   printf("Enter the no:");
//   scanf("%d",&n);
//
//   for(int i=1;i<=n;i++)
//   {
//      if(n%i==0)
//      {
//          factor ++;
//      }
//
//   }
//1
//    if(factor==2)
//    {
//        printf("\n yes prime no.%d",n);
//    }
//    else
//    {
//        printf("not");
//    }

   ////| Code              | Meaning                                |
//| ----------------- | -------------------------------------- |
//| `n % i == 0`      | Does `i` divide `n` without remainder? |
//| `factor++`        | Count how many numbers divide `n`      |
//| `if(factor == 2)` | Prime check (only 1 and `n` divide it) |







     //optimize one
     //not taking first and last ? hatauni
     //betN divide gara


//     int n;
//     int flag=1;//assume no . is prime
//     printf("Enter the no:");
//     scanf("%d",&n);
//
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag=0 ;
//             break;//not prime.
//         }
//     }
//
//
//     if(flag==1 &&n>1)
//        printf("yes prime.");
////     else if(n<=1)
////        printf("neither prime nor composite.");
//     else
//     {
//         printf("Not prime.");
//     }



   //more optimize
   //by dividing by 2
   int n;
   int flag =1;//prime
   printf("Enter the no.:");
   scanf("%d",&n);

   for(int i=2;i<n/2;i++)//other same only don n/2
   {
       if(n%i==0)
       {
          flag=0; //not prime
          break;
       }
   }
   if(flag==1&&n>1)
   {
       printf("prime");
   }
//   else if(n<=1)
    else if(n>2)
   {
       printf("Neither prime nor composite.");
   }
   else
   {
       printf("composite no.");
   }





    return 0;//status signal.
}//main scope





