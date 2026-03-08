//display name,roll no. of std , and total marks of each
//
#include<stdio.h>
struct student{
   char name[20];
   int roll;
   float marks[5];
   float total_marks;



};
int main()
{
    struct student std[2];
    {
        for(int i=0;i<2;i++)
        {
            printf("Enter the name &roll:");
            scanf("%s%d",std[i].name,&std[i].roll);//in array

         std[i].total_marks=0;//initialize//resets
            printf(" the markss of 5 subj:");
    for(int j=0;j<5;j++)
    {

        scanf("%f",&std[i].marks[j]);
        std[i].total_marks= std[i].total_marks+std[i].marks[j];
    }

        }



    };






    //printf
    //print
     for(int i=0;i<2;i++)
        {

            printf("name=%s\n roll= %d,total_marks=%.2f\n",std[i].name,std[i].roll,std[i].total_marks);//in array
        }




     return 0;
}
