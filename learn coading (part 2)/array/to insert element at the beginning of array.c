//to insert element at the beginning of array
// insert element at ending position of array
#include<stdio.h>
int main()
{
    int a[100],size,item;
    printf("Enter the size:");
    scanf("%d",&size);//100 is maximum


    printf("\nEnter array elements:");
    for(int i=0;i<size;i++)
    {
       scanf("%d",&a[i]);
    }
//    //
//    printf("insert element in array in begnning:");
//    scanf("%d",&item);
//    size++;
//    for(int i=size;i>1;i--)
//    {
//        insert element at the beginning of arrayinsert element at the beginning of array
//       a[i-1]=a[i-2];
//    }
//    a[0]=item;//cause 0 index khali



        printf("insert element in array in ending:");
    scanf("%d",&item);
    size++;
    a[size-1]=item;

    printf(" after insert element at ending position of array:");



    for(int i=0;i<size;i++)
    {
       printf("%d",a[i]);
    }



    return 0;
}

