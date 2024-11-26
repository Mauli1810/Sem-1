#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Reading the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are neither prime nor composite
    if (num == 0 || num == 1) {
        printf("%d is neither prime nor composite.\n", num);
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        // Checking the flag to determine if the number is prime
        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is a composite number.\n", num);
    }

    return 0;
}

