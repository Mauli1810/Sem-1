#include <stdio.h>

int main() {
    float basic_salary, gross_salary, HRA, DA;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on basic salary
    if (basic_salary <= 10000) {
        HRA = basic_salary * 0.2; // 20% of basic salary
        DA = basic_salary * 0.8;  // 80% of basic salary
    } else if (basic_salary <= 20000) {
        HRA = basic_salary * 0.25; // 25% of basic salary
        DA = basic_salary * 0.9;   // 90% of basic salary
    } else {
        HRA = basic_salary * 0.3;  // 30% of basic salary
        DA = basic_salary * 0.95;  // 95% of basic salary
    }

    // Calculate gross salary
    gross_salary = basic_salary + HRA + DA;

    // Print gross salary
    printf("Gross Salary is: %.2f\n", gross_salary);

    return 0;
}

