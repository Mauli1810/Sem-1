#include <stdio.h>

int main() 
{
    int units;
    float bill;

    // Reading the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculating the bill based on the consumption
    if (units <= 200) {
        bill = units * 0.50;
    } else if (units <= 400) {
        bill = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        bill = 230 + (units - 400) * 0.80;
    } else {
        bill = 425 + (units - 600) * 1.25;
    }

    // Printing the bill
    printf("The total electricity bill is: Rs. %.2f\n", bill);

    return 0;
}

