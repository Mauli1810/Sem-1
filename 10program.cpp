#include <stdio.h>

int main() {
    float M, P, C, E, CM;

    // Input marks for Mathematics, Physics, Chemistry, and Entrance Exam
    printf("Enter the marks in Mathematics (out of 200): ");
    scanf("%f", &M);
    printf("Enter the marks in Physics (out of 200): ");
    scanf("%f", &P);
    printf("Enter the marks in Chemistry (out of 200): ");
    scanf("%f", &C);
    printf("Enter the marks in Entrance Examination (out of 100): ");
    scanf("%f", &E);

    // Calculate the cut-off mark
    CM = (M / 2) + (P / 2) + (C / 2) + E;

    // Print the cut-off mark
    printf("The cut-off mark is: %.2f\n", CM);

    return 0;
}

