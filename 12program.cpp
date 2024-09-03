#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("ASCII value of %c = %d\n", character, character);

    return 0;
}

