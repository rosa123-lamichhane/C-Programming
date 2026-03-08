//to store roll_no of std.c
#include<stdio.h>
int main()
{
//    int roll_no[5];//array declaration
//    puts("Enter the 5 of roll_no:");
//
//    for(int i=0;i<5;i++)
//    {
//        scanf("%d",&roll_no[i]);
//    }
//    puts("Displaying array");
//
//    for(int i=0;i<5;i++)
//    {
//        printf("\n%d",roll_no[i]);
//    }

    //reserve the no.
     int roll_no[5];//array declaration
    puts("Enter the 5 of roll_no:");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&roll_no[i]);
    }
    puts("Displaying array");

    for(int i=4;i>=0;i--)
    {
        printf("\n%d",roll_no[i]);
    }



    return 0;
}
