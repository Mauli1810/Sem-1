#include <stdio.h>

// Function to find the biggest number in the array using pointers
int findBiggest(int *arr, int size) {
    int *ptr = arr;
    int biggest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > biggest) {
            biggest = *(ptr + i);
        }
    }

    return biggest;
}

int main() {
    int n;
    
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int biggest = findBiggest(arr, n);
    printf("The biggest integer is: %d\n", biggest);

    return 0;
}

