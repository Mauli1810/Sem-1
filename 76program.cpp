#include <stdio.h>


void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkEvenOrOdd(num);

    return 0;
}

