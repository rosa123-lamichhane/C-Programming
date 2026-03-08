#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Backup for final check

    while(num != 0) {
        rem = num % 10;
        result += rem * rem * rem;
        num = num / 10;
    }

    if(result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
