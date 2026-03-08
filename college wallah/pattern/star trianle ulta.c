//star trianle ulta.c
//* * * *
//* * *
//* *
//*

//logic: start with 0: n-i
// 1: n+1-i
//#include<stdio.h>
//int main()
//{
//        int n;
//    printf("ENter a no. of rows:");
//    scanf("%d",&n);
//
//    //******...upto n no of stars
//    //to printf n no of stars alag alag
//    for(int i=0;i<n;i++)//outer loop -> no of lines= no of rows
//    {
//        for(int j=0;j<n-i;j++)//inner loop -> no of stars in each line.=no . of columns
//        {
//           printf("* ");//
//        }
//
//      printf("\n");
//    }
//
//
//
//
//     return 0;
//}




//using :3rd variable

#include<stdio.h>
int main()
{
        int n;
    printf("ENter a no. of rows:");
    scanf("%d",&n);

    //******...upto n no of stars
    //to printf n no of stars alag alag

    int a=n;
    for(int i=0;i<n;i++)//outer loop -> no of lines= no of rows
    {
        for(int j=0;j<a;j++)//inner loop -> no of stars in each line.=no . of columns
        {
           printf("* ");//
        }
        a--;

      printf("\n");
    }




     return 0;
}
