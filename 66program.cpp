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

void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
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
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];

    readMatrix(mat1, "first");
    readMatrix(mat2, "second");

    addMatrices(mat1, mat2, result);

    printMatrix(result, "Result");

    return 0;
}

