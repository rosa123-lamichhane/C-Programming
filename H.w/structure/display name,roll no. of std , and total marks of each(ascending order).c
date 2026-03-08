//display name,roll no. of std , and total marks of each(ascending order)
//
#include<stdio.h>
struct student{
   char name[20];
   int roll;




};
int main()

{
      struct student temp;

    struct student std[5];
    {
        for(int i=0;i<5;i++)
        {
            printf("Enter the name &roll:");
            scanf("%s%d",std[i].name,&std[i].roll);//in array

    }



    };

    //for ascending order//uses nested loop
            //sorted by roll no
            for(int i=0;i<5;i++)
            {
                for(int j=i+1;j<5;j++)
                {
                    if(std[i].roll>std[j].roll)
                    {

                        //swaping
                       temp=std[i];
                        std[i]= std[j];
                        std[j]=temp;

                    }
                }
            }








    //printf
    //print
     printf("\n--- Students in Ascending Order of Roll ---\n");
     for(int i=0;i<5;i++)
        {

            printf("name=%s\n roll= %d\n",std[i].name,std[i].roll);//in array
        }




     return 0;
}
