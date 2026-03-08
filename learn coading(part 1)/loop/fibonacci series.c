//fibonacci series.c
//0,1,1,2,3
//for:a+next
//logic:a=b;
//        b=c;
//        c=a+b;//first5

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);//n=5

    int a,b,next;
    a=0,b=1,next=0;
    //same no. added after adding so
    //use loop

    printf("The fibonacci series is:");

    for(int i=0;i<n;i++)//i=0//0<5 ture print a
    {//i=2//2<5
        //3//3<5
        //4<5
        //5<5 false

        printf("\n%d",a);//a=0//1//a=1(past)//2
        next=a+b;//1//2//3//5//8
        a=b;//a=1//1//2//3//5
        b=next;//c=1//2//3//5//8

    }


    return 0;
}

