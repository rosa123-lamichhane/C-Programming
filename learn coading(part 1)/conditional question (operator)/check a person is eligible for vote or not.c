//check a person is eligible for vote or not.c
//age>=18>>voting eligible
//age<18 >>  not eligible
#include<stdio.h>
int main()
{
     int age;
     printf("Enter the age:");
     scanf("%d",&age);

     if(age>=18)
     {
         printf("eligible for voting");
     }
     else
        printf(" not eligible for voting");

     return 0;
}
