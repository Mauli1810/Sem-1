#include <stdio.h>

// Function to find the pivot element
int findPivot(int arr[], int low, int high) {
    if (high < low) {
        return -1;
    }
    if (high == low) {
        return low;
    }

    int mid = (low + high) / 2;

    // Check if mid is pivot
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid;
    }
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid - 1;
    }

    // Decide whether to search in the left half or right half
    if (arr[low] >= arr[mid]) {
        return findPivot(arr, low, mid - 1);
    }
    return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = findPivot(arr, 0, n - 1);

    if (pivot == -1) {
        printf("No pivot found. The array is not rotated.\n");
    } else {
        printf("Pivot element is %d at index %d\n", arr[pivot], pivot);
    }

    return 0;
}

