#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input elements in arr1
    printf("Enter %d elements for the first array: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements to arr2
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print arr2
    printf("Elements of the second array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
