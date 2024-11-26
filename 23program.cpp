#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Reading the base and exponent
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    // Calculating base^exponent
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    
    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}

