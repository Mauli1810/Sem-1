#include <stdio.h>
#include <string.h>


void reverseString(const char *source, char *destination) {
    int length = strlen(source);
    const char *ptrSource = source + length - 1;
    char *ptrDestination = destination;

    while (ptrSource >= source) {
        *ptrDestination = *ptrSource;
        ptrDestination++;
        ptrSource--;
    }
    *ptrDestination = '\0'; 
}

int main() {
    char source[] = "SVNITJAVA";
    char destination[100]; 

    
    reverseString(source, destination);

    
    printf("Original string: %s\n", source);
    printf("Reversed string: %s\n", destination);

    return 0;
}

