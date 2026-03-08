//user given no is palindrome or not.c
//A number is a palindrome if it reads the same backward as forward.
// For example, 121, 1331, and 12321 are palindrome numbers.
//  123 is not a palindrome.
#include<stdio.h>
int main()
{
   int n;
   int rem,rev,original;
   rev=0;
   printf("The number is:");
   scanf("%d",&n);

  original=n;//srore original value for comparision

   while(n!=0)
   {
       rem =n%10;
       rev=rev*10+rem;
       n=n/10;

   }
   if(original==rev)
     {
         printf("\n the number is palindrome:");
     }
     else
     {
         printf("\n the number is not palindrome:");
     }

    return 0;
}
