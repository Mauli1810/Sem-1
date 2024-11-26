#include <stdio.h>


int lengthIncludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}


int lengthExcludingSpaces(char *str) {
    int length = 0;
    while (*str != '\0') {
        if (*str != ' ') {
            length++;
        }
        str++;
    }
    return length;
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int lengthIncl = lengthIncludingSpaces(str);
    int lengthExcl = lengthExcludingSpaces(str);

    
    printf("Length including spaces: %d\n", lengthIncl);
    printf("Length excluding spaces: %d\n", lengthExcl);

    return 0;
}

