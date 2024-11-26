#include <stdio.h>

void reverseString(char *str) {
    int length = 0;
    char *start = str;
    char *end;
    char temp;

    
    while (*(str + length) != '\0') {
        length++;
    }

    end = str + length - 1;

    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

