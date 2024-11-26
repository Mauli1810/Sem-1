#include <stdio.h>

int main() {
    int N, i;

    // Reading the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Printing odd numbers from 1 to N
    printf("Odd numbers between 1 and %d are:\n", N);
    for (i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

