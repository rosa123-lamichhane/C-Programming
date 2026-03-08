// to insert element at any position of array
//to insert element at the beginning of array
// insert element at ending position of array
#include<stdio.h>
int main()
{
    int a[100],size,item,pos;
    printf("Enter the size:");
    scanf("%d",&size);//100 is maximum


    printf("\nEnter array elements:");
    for(int i=0;i<size;i++)
    {
       scanf("%d",&a[i]);
    }
    //
    printf("insert element in array in any:");
    scanf("%d",&pos);

    printf("Enter item that you want to insert:");

    scanf("%d",&item);
    size++;
    for(int i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;//cause 0 index khali

    size++;


    printf(" result in   position of array:");



    for(int i=0;i<size;i++)
    {
       printf("%d",a[i]);
    }



    return 0;
}


