#include <stdio.h>

int main() {
    int N, i;

    // Reading the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Printing the series
    printf("Series: ");
    for (i = 1; i * i <= N; i++) {
        printf("%d ", i * i);
    }

    return 0;
}

