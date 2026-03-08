//write a program to read all the no from a file and print the total sum &average
#include<stdio.h>
int main()
{
    FILE*fp=fopen("mee.txt","r");


    if(fp==NULL)
    {
        printf("\nfile doesn't exist.");
    }
    else
{
    int num,sum=0,count=0;

   while(fscanf(fp,"%d",&num)==1)
   {
      sum=sum+num;
      count++;
   }

   if(count==0)
   {
      printf("no number found in the file");
   }
   else
   {
       float average=(float)sum/count;
        printf("Total Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
   }



    }


    return 0;
}
