#include <stdio.h>

int main() {
    int hours, minutes, seconds, total_seconds;

    // Input time in hours, minutes, and seconds
    printf("Enter time in hours, minutes, and seconds:\n");
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);
    printf("Seconds: ");
    scanf("%d", &seconds);

    // Convert time to total seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    // Print the total seconds
    printf("Total time in seconds: %d\n", total_seconds);

    return 0;
}

