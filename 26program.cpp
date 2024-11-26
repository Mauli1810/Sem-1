#include <stdio.h>

int main() {
    int N, i;
    int sumOdd = 0, sumEven = 0;

    // Reading the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculating the sum of odd and even numbers
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    // Printing the results
    printf("Sum of all even numbers between 1 and %d = %d\n", N, sumEven);
    printf("Sum of all odd numbers between 1 and %d = %d\n", N, sumOdd);

    return 0;
}

