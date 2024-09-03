#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the result
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}

