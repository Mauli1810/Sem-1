#include <stdio.h>

int main() {
    int N, i;

    // Reading the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Printing even numbers from 2 to N
    printf("Even numbers between 2 and %d are:\n", N);
    for (i = 2; i <= N; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

