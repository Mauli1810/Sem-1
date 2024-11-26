#include <stdio.h>
#include <stdbool.h>

// Function to count the number of words in a string
int countWords(const char *str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            inWord = false;
        } else if (inWord == false) {
            inWord = true;
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int wordCount = countWords(str);

    
    printf("Number of words: %d\n", wordCount);

    return 0;
}


