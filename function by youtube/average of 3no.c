//average of 3no.c
#include<stdio.h>
//function prototype
float average (int,int ,int);

//function definition
float average (int a,int b,int c)
{
    return (a+b+c)/3.0;//form.
}

//main body
int main()
{
    int a= 3,b=4,c=6;
    printf("The average of %f :",average(a,b,c));
    return 0;

}

