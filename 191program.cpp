#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a small case letter using the conditional operator
    (ch >= 'a' && ch <= 'z') ? printf("%c is a small case letter.\n", ch) : printf("%c is not a small case letter.\n", ch);

    return 0;
}

