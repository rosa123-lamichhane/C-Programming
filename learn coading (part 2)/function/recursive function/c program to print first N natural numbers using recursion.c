//c program to print first N natural numbers using recursion
//start:1
//n term
//#include<stdio.h>
////proto
//void natural_to_nth(int current,int limit);
//int main()
//{
//     int n;
//    printf("Enter any no:");
//    scanf("%d",&n);
//
//    //fun.calling
//    natural_to_nth(1,n);//start from 1
//
//
//
//     return 0;
//}
//void natural_to_nth(int current,int limit)
//{
//    if(current<=limit)
//    {
//       printf("%d\n",current);
//       natural_to_nth(current+1,limit);
//    }
//
//}
#include<stdio.h>
void natural(int n)
{
    if(n<=10)
    {
      printf("%d",n);
      natural(n+1); //calling same fun//recursive
    }
}
int main()
{
    int a=1;
    natural(a);
}



