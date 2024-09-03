#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period in years: ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Print the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}

