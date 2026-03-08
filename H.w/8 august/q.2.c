#include<stdio.h>
void toaddmore(int arr[],int n);
void sortarray(int arr[],int n);
void display(int arr[],int n);

int main()
{
    int n;
    printf("enter the no. of elements:");
    scanf("%d",&n);

    int arr[n];

    toaddmore(arr,n);
    sortarray(arr,n);
   printf("Array sorting in ascending order : ");
    display(arr,n);

}
// Function to input and display array after input
void toaddmore(int array[], int n) {
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("the inputs:");


    display(array, n);  // Reuse display function here

}
// Function to sort array in ascending order
void sortarray(int array[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
// Function to display array elements
void display(int array[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
