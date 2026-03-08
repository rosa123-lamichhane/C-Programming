//vowels or consonant.c
//a e i o u>> vowels
//remaining all .....--->> consonant(26 char)
#include<stdio.h>
int main()
{
     char ch;
     printf("Enter any character:");
     scanf("%c",&ch);

   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u '
      ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
   {
       printf(" the character is vowels");
   }
   else{

      printf(" the character is consonant");
   }

     return 0;
}

