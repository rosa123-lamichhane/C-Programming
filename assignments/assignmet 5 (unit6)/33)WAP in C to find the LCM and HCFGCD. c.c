////f3. WAP in C to find the LCM and HCF/GCD.
//multiple of:4=4,8,12
//          6=6 12
//full form:
//    hcm= highest common multiple:common factor
//    lcm=least common multiple




/*
Title: WAP in C to
Author: Rosa lamichhane.
Date:5/29/2025
     */

#include<stdio.h>//preprocessor directive
int main()//entry point of c
{
//   int a,b,temp,gcd,lcm;
//printf("Enter a and b:");
//scanf("%d%d",&a,&b);

//int x=a,y=b;
//while(y!=0)
//{
//    //A loop that runs until y becomes 0.
//    temp =y;
//    y=x%y;
//    x=temp;
//}
//
//        gcd=x;
//        lcm=(a*b)/gcd;
//        printf("hcf(gcd=%d\n",gcd);
//        printf("lcm=%d\n",lcm);

//easier way ??
      int n1,n2,x,y,temp,gcd,lcm;
    printf("Enter a and b:");
    scanf("%d%d",&n1,&n2);

    x=n1;
    y=n2;


   while(n1!=n2)
   {
       if(n1>n2)
       {
           n1=n1-n2;
       }

       else{
        n2=n2-n1;
       }
   }
   printf("gcd :%d\n",n1);
   gcd=n1;
   lcm=(x*y)/gcd;
   printf("lcm=%d",lcm);

   getch();





    return 0;//status signal.
}//main scope




