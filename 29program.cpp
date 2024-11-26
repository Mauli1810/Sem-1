#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    // Reading the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reversing the number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    // Checking if the number is a palindrome
    if (reversedNum == num)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}

