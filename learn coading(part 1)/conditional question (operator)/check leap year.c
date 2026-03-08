//check leap year
//leap year:
//1200 1600 2000 2400 etc//100 centuray (diff) //difference of  400 or divisible
//2012 2016 2020.........2096/divisible by 4   and(2 and 3)
//2100 2200 2300 2500//yes 100 centuary but differe is 100 and 200 only so when difference is never a 400
#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);//1600//2020//2100

    if(y%400==0||y%4==0&&y%100!=0)//true(leap)//||true and true(0aayana)
   {//false||true& false(exactly divisible vayo)
       printf("leap year");
   }
   else
   {
       printf("not-leap year");
   }




    return 0;
}
