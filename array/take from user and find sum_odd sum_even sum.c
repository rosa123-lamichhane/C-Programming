//take from user and find sum_odd sum_even sum.c
#include<stdio.h>
int main()
{

  int sum =0;
  int e_sum=0;
  int o_sum=0;
  int size;
  printf("Enter the size:");
  scanf("%d",&size);

  int age[size];
  printf("Enter the roll no:");

  for(int i=0;i<size;i++)
  {
      scanf("%d",&age[i]);
  }

  puts("Displaying the sum of age's.");
  puts("Displaying the  e_sum of age's.");
  puts("Displaying the  o_sum of age's.");

  for(int i=0;i<size;i++)
  {
      sum=sum+age[i];

       if(age[i]%2==0)
      {
          e_sum=e_sum+age[i];

      }



      else
      {
          o_sum=o_sum+age[i];
      }
  }

   printf("\n the sum: %d ",sum);
   printf("\n the e_sum: %d ",e_sum);
    printf("\n the o_sum: %d ",o_sum);

    return 0;
}
