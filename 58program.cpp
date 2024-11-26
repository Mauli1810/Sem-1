#include <stdio.h>

#define SIZE 10

void readArray(int arr[], const char* name) {
    printf("Enter elements of %s array:\n", name);
    for (int i = 0; i < SIZE; i++) {
        printf("%s[%d]: ", name, i);
        scanf("%d", &arr[i]);
    }
}

void addArrays(int arr1[], int arr2[], int result[]) {
    for (int i = 0; i < SIZE; i++) {
        result[i] = arr1[i] + arr2[i];
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
    int arr1[SIZE], arr2[SIZE], result[SIZE];

    readArray(arr1, "first");
    readArray(arr2, "second");

    addArrays(arr1, arr2, result);

    printArray(result, "Result");

    return 0;
}

