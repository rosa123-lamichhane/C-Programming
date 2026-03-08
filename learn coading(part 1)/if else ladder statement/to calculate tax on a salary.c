//to calculate tax on a salary
//
#include<stdio.h>
int main()
{
    int sal;
    double tax;
    printf("Enter the salary:");
    scanf("%d",&sal);

    if(sal<=10000)
    {
        printf("no salary");
    }
    else if(sal>10000&&sal<=100000)
    {
        sal=sal*.10;
        printf("%lf",tax);
    }
    else if(sal>100000&&sal<=1000000)
        {
        tax=sal*.25;
        printf("%lf",tax);
    }
    else
    {
        tax=sal*.4;
        printf("%lf",tax);
    }


     return 0;
}
