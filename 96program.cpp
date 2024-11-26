#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100


void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}


void sortStrings(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char *ptr[MAX_STRINGS];
    int n;

    
    printf("Enter the number of strings: ");
    scanf("%d", &n);


    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        ptr[i] = strings[i];
    }

    
    sortStrings(ptr, n);


    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }

    return 0;
}

