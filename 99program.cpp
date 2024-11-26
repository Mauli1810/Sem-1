#include <stdio.h>
#include <ctype.h>

int countVowels(FILE *file) {
    int vowelCount = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    FILE *file;
    char filename[100];
    int vowelCount;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    
    vowelCount = countVowels(file);

    
    printf("Number of vowels in the file: %d\n", vowelCount);

    
    fclose(file);

    return 0;
}

