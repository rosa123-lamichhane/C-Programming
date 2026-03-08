//o Sort Array Elements in Ascending & Descending Order
//
#include<stdio.h>
int main()
{
    int a[5];
   printf("\nEnter array elements:");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    //logic
    printf("\narray elements in ascending order:");
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(a[j]>a[j+1])//decending< others same.
            {
                int temp;
                //
                //swap code//basic
//                temp=a;
//                a=b;
//                b=temp;

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }

    }

    //out
    for(int i=0;i<5;i++)
    {
       printf("%d\n",a[i]);
    }




    return 0;
}

