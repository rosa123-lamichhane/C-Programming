//reverse no.c
//input 234=432
////10)234(23(after division)
//     230
//     ---
//        49(reminder).
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter any no:");
    scanf("%d",&n);//234

    printf("reverse no:");

    while(n>0)//234>0(true)
    {
        r=n%10;//r=4

        printf("%d",r);//r=4
        n=n/10;//23
    }


     return 0;
}
