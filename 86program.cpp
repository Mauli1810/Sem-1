#include <stdio.h>


int findLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char text[100];

    
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    
    if (text[findLength(text) - 1] == '\n') {
        text[findLength(text) - 1] = '\0';
    }

    
    int length = findLength(text);
    printf("The length of the string is: %d\n", length);

    return 0;
}

