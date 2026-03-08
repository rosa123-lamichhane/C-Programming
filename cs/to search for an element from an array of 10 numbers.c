#include <stdio.h>

int main() {
    int arr[10], i, key, found = 0;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter number to search: ");
    scanf("%d", &key);

    // Search in the array
    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            found = 1;  // mark as found
            break;      // stop after finding
        }
    }

    if(found)
        printf("%d is found at position %d\n", key, i + 1);
    else
        printf("%d is not found in the array\n", key);

    return 0;
}
