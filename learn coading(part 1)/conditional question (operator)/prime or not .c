//prime or composite
//prime:1 and aafu la divisible vayo vanya.
//eg:2,3,5,7.........
//
#include<stdio.h>
int main()
{
//    int n,count=0;
//    printf("Enter the no.:");
//    scanf("%d",&n);//5
//
//    //processing or calcu.
//    //5 i<=5 samma first loop chalxa.
//    for(int i=1;i<=n;i++)//i=1:1<=5
//    {
//        if(n%i==0)//5%1==0
//        {
//            count ++;//count =1
//        }
//    }
//
//    if(count==2)
//    {
//        printf("%d is the prime no.",n);
//    }
//
//    else
//    {
//       printf("%d is the composite no.",n);
//    }

//optimize way?
   int n,flag=1;
    printf("Enter the no.:");
    scanf("%d",&n);//5

    //processing or calcu.
    //5 i<=5 samma first loop chalxa.
    for(int i=2;i<=n/2;i++)//i=1:1<=5
    {
        if(n%i==0)//5%1==0
        {
            flag=0;//count =1
            break;
        }
    }

    if(flag==1&& n>1)
    {
        printf(" is the prime no.");
    }
    else
    {
        printf("is the composite no.");
    }




     return 0;

    }

