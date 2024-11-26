#include <stdio.h>

void calculateSquareAndCube(int *num, int *square, int *cube) {
    *square = (*num) * (*num);
    *cube = (*num) * (*num) * (*num);
}

int main() {
    int number, square, cube;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    calculateSquareAndCube(&number, &square, &cube);

    printf("Square of %d is: %d\n", number, square);
    printf("Cube of %d is: %d\n", number, cube);

    return 0;
}

