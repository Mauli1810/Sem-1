#include <stdio.h>

// Function to calculate factorial
double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    double sum = 0.0;

    // Reading the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculating the sum of the series
    for (int i = 1; i <= N; i++) {
        sum += i / factorial(i);
    }

    // Printing the result
    printf("Sum of the series = %.5lf\n", sum);

    return 0;
}

