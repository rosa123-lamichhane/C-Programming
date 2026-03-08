//
#include<stdio.h>
int main()
{
    float eng,nep,math,acc,c;
    float total,aver;
    printf("Enter the marks of eng,nep,math,acc & c:");
    scanf("%f%f%f%f%f",&eng,&nep,&math,&acc,&c);

    total= (eng+nep+math+acc+c);
//    aver=(eng+nep+math+acc+c)/5;
      aver=total/5;

    printf("The total marks:%f\n",total);
    printf("the average marks:%f\n",aver);







    return 0;
}

