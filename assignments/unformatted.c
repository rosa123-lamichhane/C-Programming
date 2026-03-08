
#include <stdio.h>

int main() {
    int age;
    float percentage;
    char name[50];  // Array to store the name (string)

    // Input
    printf("Enter your name: ");
    scanf("%49s", name);  // %49s to prevent buffer overflow

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    // Output
    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}
