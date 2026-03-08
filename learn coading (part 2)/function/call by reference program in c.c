//call by reference program in c
//call by value program in c
//call by value in c programming | c program to swap two numbers
//
#include<stdio.h>
//function declaration or prototype
int swap(int *p,int *q);
int main()
{
     int a,b;
     printf("Enter the a &b:");
    scanf("%d%d",&a,&b);


    swap(&a,&b);//function calling//actual parameter
    printf("main fun. a=%d&b=&%d \n",a,b);

     return 0;
}

int swap(int *p,int *q)//function called or definition//formal paramater
{
    int temp;//10 ,20=30-10:b//
//    a=a+b;//30
//    b=a-b;//10
//    a=a-b;
   //using 3rd
   temp=*p;
   *p=*q;
   *q=temp;
  printf("calling fun. p=%d&  q=&%d \n",*p,*q);


}





