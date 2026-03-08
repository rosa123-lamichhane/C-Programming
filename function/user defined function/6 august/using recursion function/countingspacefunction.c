//countingspacefunction.c
#include<stdio.h>
void main()
{
    char sen[50];
    printf("Enter the sen:");
    gets(sen);

    int spaces=countspace(sen,50);//count space fun. ma sen variable name and , that's size is in spaces sun.save or store


    printf(" the white space:%d",spaces);
}

int countspace(char arr[],int s)
{
    int i=0,count =0;
    while(arr[i]!='\0')
    {
        if(arr[i]==' ')
        {
            count++;
        }
        i++;




    }

    return count;
}
