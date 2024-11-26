#include <stdio.h>

int main() {
    int size, num, count = 0;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to find its occurrence
    printf("Enter the element to find its occurrence: ");
    scanf("%d", &num);

    // Count the occurrences of the element
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    // Print the result
    printf("Element %d occurs %d times in the array.\n", num, count);

    return 0;
}

