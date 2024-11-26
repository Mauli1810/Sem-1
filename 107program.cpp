#include <stdio.h>
#include <math.h>


int flip(int num, int n) {
    int divider = pow(10, n);
    int lastDigits = num % divider;
    int firstPart = num / divider;
    int reversedLastDigits = 0;

    
    while (lastDigits != 0) {
        int digit = lastDigits % 10;
        reversedLastDigits = reversedLastDigits * 10 + digit;
        lastDigits /= 10;
    }

    
    return firstPart * divider + reversedLastDigits;
}

int main() {
    int num, n, result;

    
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    
    result = flip(num, n);

    
    printf("The number after flipping the last %d digits is: %d\n", n, result);

    return 0;
}

