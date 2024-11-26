#include <stdio.h>

#define SIZE 10

void readArray(int arr[], const char* name) {
    printf("Enter elements of %s array:\n", name);
    for (int i = 0; i < SIZE; i++) {
        printf("%s[%d]: ", name, i);
        scanf("%d", &arr[i]);
    }
}

void swapArrays(int arr1[], int arr2[]) {
    for (int i = 0; i < SIZE; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

void printArray(int arr[], const char* name) {
    printf("%s array: ", name);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[SIZE], arr2[SIZE];

    readArray(arr1, "first");
    readArray(arr2, "second");

    printf("Before swapping:\n");
    printArray(arr1, "First");
    printArray(arr2, "Second");

    swapArrays(arr1, arr2);

    printf("After swapping:\n");
    printArray(arr1, "First");
    printArray(arr2, "Second");

    return 0;
}

