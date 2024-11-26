#include <stdio.h>

#define SIZE 3

void readMatrix(int matrix[SIZE][SIZE]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void findMaxMin(int matrix[SIZE][SIZE], int *max, int *min) {
    *max = matrix[0][0];
    *min = matrix[0][0];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] > *max) {
                *max = matrix[i][j];
            }
            if (matrix[i][j] < *min) {
                *min = matrix[i][j];
            }
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int max, min;

    readMatrix(matrix);
    findMaxMin(matrix, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

