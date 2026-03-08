////What is a Leap Year?
//A year is a leap year if:
//
// It is divisible by 4
//BUT
//// If it is also divisible by 100, it must also be divisible by 400
//
// Examples:
//
//2020 → Leap year
//
////1900 →  Not a leap year (divisible by 100 but not 400)
//
////2000 →  Leap year (divisible by 400)


   #include<stdio.h>
   int main()
   {
    int year ;
    printf("Enter the year:");
    scanf("%d",&year);

    if((year%4==0&&year%100!=0)||(year%400==0))
        printf("%d is leap year.\n",year);
    else
        printf("%d isnot a  leap year.\n",year);



       return 0;
   }
