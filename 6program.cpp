#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    // Swap logic without using a third variable
    a = a + b; // Step 1: a now contains the sum of a and b
    b = a - b; // Step 2: b now contains the original value of a
    a = a - b; // Step 3: a now contains the original value of b

    // Print the swapped values
    printf("\nAfter swapping:\na = %d\nb = %d\n", a, b);

    return 0;
}

