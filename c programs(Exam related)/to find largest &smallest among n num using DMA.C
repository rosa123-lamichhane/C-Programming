//to find largest &smallest among n num using DMA.C
//wrong
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,larg,smal;
    printf("Enter num. of elements:");
    scanf("%d",&n);

    //allocate memory
    arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL)
    {
        printf("memory allocation failed!");
        return 1;
    }

    //input
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //initialize
    larg=smal=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>larg)
        larg=arr[i];
       if(arr[i]<smal)
        smal=arr[i];
    }

     printf("result:");
         printf("largest=%d\n",larg);
        printf("smallest=%d\n",smal);

    free(arr);//release memory

return 0;
}
