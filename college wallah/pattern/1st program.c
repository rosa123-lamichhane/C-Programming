//solid rectangle
//all (rectangle)l=5,b=3
//*****
//*****
//*****
//no of lines=n
//stars in each lines =m
//used nested loops
#include<stdio.h>
int main()
{
//    int n;
//    printf("ENter a no:");
//    scanf("%d",&n);
//    //******...upto n no of stars
//    //to printf n no of stars alag alag
//    for(int i=0;i<3;i++)//outer loop -> no of lines= no of rows
//    {
//        for(int i=0;i<n;i++)//inner loop -> no of stars in each line.=no . of columns
//        {
//           printf("*");//
//        }
//
//      printf("\n");
//    }

//generalize method??
      int n;
    printf("ENter a no. of rows:");
    scanf("%d",&n);
     int m;
    printf("ENter a no. of column:");
    scanf("%d",&m);
    //******...upto n no of stars
    //to printf n no of stars alag alag
    for(int i=0;i<n;i++)//outer loop -> no of lines= no of rows
    {
        for(int i=0;i<m;i++)//inner loop -> no of stars in each line.=no . of columns
        {
           printf("*");//
        }

      printf("\n");//har line k bad enter chalna or  this is after the inner loop end
    }



     return 0;
}
