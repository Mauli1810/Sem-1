#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    // Swap logic using a third variable
    temp = a;
    a = b;
    b = temp;

    // Print the swapped values
    printf("\nAfter swapping:\na = %d\nb = %d\n", a, b);

    return 0;
}

