//roll,name&marks in std.txt file .
#include<stdio.h>
int main()
{
    FILE*fp;
    int roll;
    char name[20];
    float marks;

    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("file not exist.");
        return 1;
    }
    printf("Enter the Roll ,name & marks:");
    scanf("%d%s%f",&roll,name,&marks);

    fprintf(fp,"roll:%d\nname:%s\nmarks:%f\n",roll,name,marks);
    printf("Data written to student.txt\n");
    return 0;

    fclose(fp);




    return 0;
}
