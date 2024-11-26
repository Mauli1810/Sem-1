#include <stdio.h>


void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("First %d Fibonacci numbers: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    printf("Testing for N=5\n");
    generateFibonacci(5);

    printf("Testing for N=10\n");
    generateFibonacci(10);

    printf("Testing for N=15\n");
    generateFibonacci(15);

    return 0;
}

