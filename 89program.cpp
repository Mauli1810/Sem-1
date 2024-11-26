#include <stdio.h>


void copyArrayInReverse(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[size - 1 - i];
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];

    
    copyArrayInReverse(source, destination, size);

    
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

