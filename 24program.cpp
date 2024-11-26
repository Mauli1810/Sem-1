#include <stdio.h>

float calculateY(float x, int n) {
    float y;
    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + x / n;
    } else if (n == 3) {
        y = 1 + x * n;
    } else {
        y = 1 + n * x;
    }
    return y;
}

int main() {
    float x;
    int n;
    float y;

    // Reading the values of x and n
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculating the value of y
    y = calculateY(x, n);

    
    printf("The value of Y is: %.2f\n", y);

    return 0;
}

