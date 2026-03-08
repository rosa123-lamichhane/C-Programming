#include <stdio.h>

// Function prototype
void sortArray(int arr[], int n);

int main() {
    int n;

    // Step 1: Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // declare array of size n

    // Step 2: Ask for elements in one line
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Call function to sort array
    sortArray(arr, n);

    // Step 4: Display sorted array
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Function to sort array in ascending order
void sortArray(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                // swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
