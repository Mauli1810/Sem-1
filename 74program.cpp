#include <stdio.h>

void mergeArrays(int A[], int B[], int C[], int sizeA, int sizeB) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and merge them into C
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements of A[], if any
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Copy remaining elements of B[], if any
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int sizeC = sizeA + sizeB;
    int C[sizeC];

    mergeArrays(A, B, C, sizeA, sizeB);

    printf("Merged array: ");
    for (int i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}

