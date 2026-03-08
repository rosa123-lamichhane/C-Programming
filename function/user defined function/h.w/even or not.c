//no arg, no return
//#include<stdio.h>
//void main()
//{
//    even();
//}
//void even()
//{
//    int n;
//    printf("Enter the num:");
//    scanf("%d",&n);
//
//    if(n%2==0)
//    {
//        printf("Even");
//    }
//    else
//    {
//        printf("Odd no.");
//    }
//}
//
//

//takes arg, no return
//#include<stdio.h>
//function prototype
//void main()
//{
//    int n;
//    printf("Enter the num:");
//    scanf("%d",&n);
//
//    even(n);
//}
//void even(int n)
//fun. defin.
//{
//
//
//    if(n%2==0)
//    {
//        printf("Even");
//    }
//    else
//    {
//        printf("Odd no.");
//    }
//
//}

//takes arg, takes return
#include<stdio.h>
//function prototype
void main()
{
    int n;
    printf("Enter the num:");
    scanf("%d",&n);

    int val=even(n);
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd no.");
    }

}
void even(int n)
//fun. defin.
{


    if (n % 2 == 0)
        return 1;
    else
        return 0;
}


