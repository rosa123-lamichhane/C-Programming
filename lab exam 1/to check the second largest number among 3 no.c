
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the no:");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b&&a>c)
      {
          if(b>c)
            printf(" b is second largest");
          else
            printf("c is second largest.");
      }
    else if(b>c&&b>a)

        {
            if(a>c)
                printf("a is second largest.");
            else
                printf("C is second largest.");
        }
    else
        {
            if(b>a)
                printf("b is 2nd largest.");
            else
                printf("a is second largest.");
        }



  return 0;
}
