//Quadratic_equation_roots_finding.c
#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c ,dis;
   float root1,root2;
   printf("Enter the value of a,b&c:");
   scanf("%f%f%f",&a,&b,&c);

   dis=(b*b-(4*a*c));

    if (dis>0)
    {
        printf("The real and distinct value");
        root1= (-b+sqrt(dis))/(2*a);
        root2= (-b-sqrt(dis))/(2*a);
        printf("%f%.2f",root1,root2);
    }

    else if(dis==0)
    {
        printf("\n real and same value");
        root1=root2= (-b/(2*a));
        printf("%f%f.2",root1,root2);
    }

    else
    {
        printf("\nComplex and distinct");
        float real;
        float img;
        real= (-b/(2*a));
        img= sqrt(-dis)/(2*a);
        printf("root1=%f+i%f",real,img);
        printf("root2=%f+i%f",real,img);
    }


    return 0;
}
