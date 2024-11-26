#include <stdio.h>


void printFibonacci(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    if (n < 2) {
        printf("The number of terms should be at least 2.\n");
    } else {
        printFibonacci(n);
    }

    return 0;
}

