#include<stdio.h>
int main()
{
    data_type array_name[size];//array declaration
    puts("Enter the size of array_name:");

    for(int i=0;i<5;i++)
    {
        scanf("%d",&array_name[i]);
    }

     puts("Displaying array");

    for(int i=0;i<size;i++)
    {
        printf("%d",array_name[i]);
    }

    return 0;
}
