//to find maximum and minimum element of array
//a[size]=10 20 30 40 50>>max=50 min=10
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int n[size];


    //input
    printf("Enter the n no:");
    for(int i=0;i<size;i++)
    {
         scanf("%d",&n[i]);
    }

  int max=n[0];
  int min=n[0];

    //logic
    for(int i=0;i<size;i++)
    {

             if(n[i]>max)
             {
                max=n[i];
             }
             if(n[i]<min)
             {
                 min=n[i];
             }
         }
         printf("max. value of array=%d\n",max);
         printf("min. value of array=%d\n",min);
   return 0;
}
