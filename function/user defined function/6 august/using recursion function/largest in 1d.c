////largest in 1d.c
//#include<stdio.h>
//void main()
//{
//    int arr[]={1,2,4,6,8,9,4,5,6,8,11};
//    int l=largest(arr);
//     printf("\nThe largest element in the matrix is: %d\n", l);
//
//
//}
//
//int largest(int a[])
//{
//    int largest=a[0];
//    for(int i=1;i<11;i++)
//    {
//        if(largest<a[i])
//        {
//            largest=a[i];
//        }
//
//    }
//
//    return largest;
//}


   //largest in 1d.c
#include<stdio.h>
void main()
{
    int arr[]={1,2,4,6,8,9,4,5,6,8,11};
    int size=sizeof(arr)/sizeof(int);
    printf("%d\n",size);
    int l=largest(arr,size);
     printf("\nThe largest element in the matrix is: %d\n", l);


}

int largest(int a[],int s)
{
    int largest=a[0];
    for(int i=1;i<s;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }

    }

    return largest;
}

