//matrix diagonals(sum).c
//it's matrix must be a square matrix.
//two types:primary and secondary diagonals.
//2d array

//simplest codeeeeee
#include<stdio.h>
int main()
{

//     //asking the user for input
//  int a[3][3];
//  int Ps_diagonal=0,ss_diagonal=0;
//  printf("the 3*3 matrix:\n");
//    //for inpurt
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//
//    //for to print the input into matrix format
//    printf("\n the matrix is:");
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
//            printf("%d\t",a[i][j]);
//        }
//        printf("\n");
//    }
////    //processing +logic
////    for(int i=0;i<3;i++)
////    {
////        for(int j=0;j<3;j++)
////        {
////         if(i==j)
////         {
////             Ps_diagonal=Ps_diagonal+a[i][j];
////         }
////         if(i+j==3-1)
////         {
////             ss_diagonal=ss_diagonal+a[i][j];
////         }
////        }
//
//        printf("\n ");
//    }
//     //output
//            printf("\nthe primary sum diagonal is:%d",Ps_diagonal);
//             printf("\nthe secondary sum diagonal is:%d",ss_diagonal);
//
//
//

 //doing initialization and declaration in same.



    int a[3][3]={2,4,8,6,3,4,5,8,9};
    int pd_sum=0,sd_sum=0;
    int sum=0;

   // logic for sum.
      // for to print the input into matrix format
    printf("\n the matrix is:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
//    for(int i=0;i<3;i++)
//    {
//        //print input in matrix format
//
//        sum=sum+a[i][i];
//        printf("\n");
//
//    }
//    printf("\n the sum:%d",sum);

   // processingor calcu.

    for(int i=0;i<3;i++)
    {
       pd_sum=pd_sum+a[i][i];
       sd_sum=sd_sum+a[i][3-1-i];//cause decreasing.
    }

  //output?
  printf("\nthe primary sum diagonal is:%d",pd_sum);
  printf("\nthe secondary sum diagonal is:%d",sd_sum);





    return 0;
}
