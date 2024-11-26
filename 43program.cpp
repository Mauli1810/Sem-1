#include <stdio.h>

int main() {
    float sales, commission;

    // Reading the sales amount
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    // Calculating the commission based on the sales amount
    if (sales <= 500) {
        commission = sales * 0.05;
    } else if (sales <= 2000) {
        commission = 35 + (sales - 500) * 0.10;
    } else if (sales <= 5000) {
        commission = 185 + (sales - 2000) * 0.12;
    } else {
        commission = sales * 0.125;
    }

    // Printing the commission
    printf("The commission is: Rs. %.2f\n", commission);

    return 0;
}

