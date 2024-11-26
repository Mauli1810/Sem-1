#include <stdio.h>

int main() {
    int N, i;

    // Reading the number
    printf("Enter an integer: ");
    scanf("%d", &N);

    printf("Factors of %d are: ", N);
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

