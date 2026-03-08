// make calculator without using "switch case"
//calcu:+,-,/,%
#include<stdio.h>
int main()
{
    int a,b,choice;
    int add,sub,mul,div,modu;
    printf("Enter the choice:");
    scanf("%d",&choice);

    printf("Enter the a &b:");
    scanf("%d%d",&a,&b);

    //arithmetic operation
    if(choice==1)
    {
      add=a+b;
      printf("Addition:%d",add);
    }
    else if(choice==2)
    {
      sub=a-b;
      printf("subtraction:%d",sub);
    }
    else if(choice==3)
    {
      mul=a*b;
      printf("multiplication:%d",mul);

    }
    else if(choice==4)
    {
        div=a/b;
     printf("division:%d",div);
    }

    else if (choice==5)
    {
        modu=a%b;//remininder
        printf("modulo:%d",modu);

    }
    else
        printf("invalid input");



     return 0;
}

