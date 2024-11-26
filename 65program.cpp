#include <stdio.h>

#define SIZE 3

void readMatrix(int matrix[SIZE][SIZE], const char* name) {
    printf("Enter elements of %s matrix:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%s[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE], const char* name) {
    printf("%s matrix:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE], transposed[SIZE][SIZE];

    readMatrix(matrix, "original");

    transposeMatrix(matrix, transposed);

    printMatrix(transposed, "Transposed");

    return 0;
}

