//count digits .c
//opposite of reveerse logic like
#include<stdio.h>
int main()
{
     int n,count =0;
    printf("Enter any no:");
    scanf("%d",&n);//1728



    while(n>0)//234>0(true)
    {
        n=n/10;//1728/10=172/10//17//1
        count++;//1//2//3//4(count the missing value)


    }
     printf(" total digits :%d",count);


     return 0;
}

