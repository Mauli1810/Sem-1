#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num, result;

    // Reading the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reducing the sum to a single digit
    result = sumOfDigits(num);
    while (result >= 10) {
        result = sumOfDigits(result);
    }

    // Printing the result
    printf("The single digit sum of the digits is: %d\n", result);

    return 0;
}

