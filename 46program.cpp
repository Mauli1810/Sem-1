#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZES 16

int main() {
    
    double circumferences[MAX_SIZES] = {20.57, 20.87, 21.26, 21.65, 22.05, 22.44, 22.83, 23.23, 23.62, 24.02, 24.41, 24.80, 25.20, 25.59, 25.98, 26.38};
    char *hatSizesUS[MAX_SIZES] = {"6 1/2", "6 5/8", "6 3/4", "6 7/8", "7", "7 1/8", "7 1/4", "7 3/8", "7 1/2", "7 5/8", "7 3/4", "7 7/8", "8", "8 1/8", "8 1/4", "8 3/8"};
    char *hatSizesUK[MAX_SIZES] = {"6 1/2", "6 5/8", "6 3/4", "6 7/8", "7", "7 1/8", "7 1/4", "7 3/8", "7 1/2", "7 5/8", "7 3/4", "7 7/8", "8", "8 1/8", "8 1/4", "8 3/8"};

    double headCircumference;
    printf("Enter the circumference of your head in inches: ");
    scanf("%lf", &headCircumference);

    
    bool sizeFound = false;
    for (int i = 0; i < MAX_SIZES; i++) {
        if (headCircumference <= circumferences[i]) {
            printf("Your hat size in the US is: %s\n", hatSizesUS[i]);
            printf("Your hat size in the UK is: %s\n", hatSizesUK[i]);
            sizeFound = true;
            break;
        }
    }

    if (!sizeFound) {
        printf("Sorry, we don't have a hat size for that circumference.\n");
    }

    return 0;
}

