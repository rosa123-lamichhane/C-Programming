// Print the table of user given number in format: 2 * 5 =10
//What it means:
//The user will enter a number, for example: 2
//
//You need to print the multiplication table of that number (usually from 1 to 10)
//
//Each line should show the multiplication in the format:
//2 * 1 = 2
//2 * 2 = 4
//2 * 3 = 6
//...
//2 * 10 =
//So 2 * 5 = 10 is just an example line from the multiplication table of 2.



#include<stdio.h>
int main()
{
   int n;
   printf("Enter the value of n:");
   scanf("%d",&n);

   printf("The multiplication table:");

   //using loop create the table
   for(int i=0;i<=10;i++)
   {
       printf("%d*%d=%d\n",n,i,n*i);
   }







  return 0;
}
