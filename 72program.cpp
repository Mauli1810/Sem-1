#include <stdio.h>

// Function to rotate the array to the left by one position
void rotateLeftByOne(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

// Function to rotate the array to the left by N positions
void rotateLeft(int arr[], int size, int N) {
    for (int i = 0; i < N; i++) {
        rotateLeftByOne(arr, size);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int N = 3; // Number of positions to rotate

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateLeft(arr, size, N);

    printf("Array after rotating by %d positions: ", N);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

