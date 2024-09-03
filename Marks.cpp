#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    // Input marks of five subjects
    printf("Enter the marks of five subjects:\n");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    // Calculate total marks
    total = subject1 + subject2 + subject3 + subject4 + subject5;

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Print total and percentage
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

