#include <stdio.h>

int main() {
    int num, sum = 0;

    // Reading numbers until a negative number is entered
    do {
        printf("Enter a number (negative number to stop): ");
        scanf("%d", &num);

        if (num >= 0) {
            sum += num;
        }
    } while (num >= 0);

    // Printing the sum of the numbers
    printf("Sum of the entered numbers: %d\n", sum);

    return 0;
}

