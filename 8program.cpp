#include <stdio.h>

int main() {
    long int total_seconds = 31558150;
    int days, hours, minutes, seconds;

    // Calculate days
    days = total_seconds / (24 * 3600);
    total_seconds %= (24 * 3600);

    // Calculate hours
    hours = total_seconds / 3600;
    total_seconds %= 3600;

    // Calculate minutes
    minutes = total_seconds / 60;

    // Remaining seconds
    seconds = total_seconds % 60;

    // Print the result
    printf("31,558,150 seconds is equivalent to:\n");
    printf("%d days, %d hours, %d minutes, and %d seconds\n", days, hours, minutes, seconds);

    return 0;
}

