#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input total seconds
    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    // Calculate hours
    hours = total_seconds / 3600;
    total_seconds %= 3600;

    // Calculate minutes
    minutes = total_seconds / 60;

    // Remaining seconds
    seconds = total_seconds % 60;

    // Print the result
    printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds\n", total_seconds, hours, minutes, seconds);

    return 0;
}

