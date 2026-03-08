#include <stdio.h>

    int main() {
    int n;
    printf("Enter limits n: ");
    scanf("%d", &n);

    int first , second , next;
    first =0;
    second=1;

    printf("Fibonacci Series up to %d terms:", n);


    for (int i =0; i <n; i++)
     {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;



    }

     printf("\n");

    return 0;
}
