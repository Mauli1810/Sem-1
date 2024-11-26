#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;


    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("Invalid input! r should be less than or equal to n.\n");
    } else {
        printf("NCR (%d choose %d) = %lld\n", n, r, nCr(n, r));
    }

    return 0;
}

