#include <stdio.h>
#include <ctype.h>

// Function to count the number of vowels in a string using pointers
int countVowels(const char *str) {
    int count = 0;
    while (*str != '\0') {
        char ch = tolower(*str); // Convert to lowercase for uniformity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    // Read a line of text from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count the number of vowels
    int vowelsCount = countVowels(str);

    // Print the result
    printf("Number of vowels: %d\n", vowelsCount);

    return 0;
}

