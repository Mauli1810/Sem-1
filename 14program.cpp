#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a capital letter
    if (isupper(ch)) {
        printf("%c is a capital letter.\n", ch);
    }
    // Check if the character is a small case letter
    else if (islower(ch)) {
        printf("%c is a small case letter.\n", ch);
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    }
    // If none of the above, it is a special symbol
    else {
        printf("%c is a special symbol.\n", ch);
    }

    return 0;
}

