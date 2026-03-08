//call by value in c programming | c program to swap two numbers
//
#include<stdio.h>
//function declaration or prototype
int swap(int x,int y);
int main()
{
     int a,b;
     printf("Enter the a &b:");
    scanf("%d%d",&a,&b);

    swap(a,b);//function calling
    printf("main fun. a=%d&b=&%d \n",a,b);

     return 0;
}

int swap(int x,int y)//function called or definition
{
    int temp;//10 ,20=30-10:b//
//    a=a+b;//30
//    b=a-b;//10
//    a=a-b;
   //using 3rd
   temp=x;
   x=y;
   y=temp;
  printf("calling fun. x=%d&  y=&%d \n",x,y);


}





