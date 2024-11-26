#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    int totalMarks;
};

int main() {
    FILE *file;
    char filename[] = "LNMIITStudent.java";
    int n;

    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Total Marks: ");
        scanf("%d", &students[i].totalMarks);
    }

    
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Could not open file %s for writing.\n", filename);
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        fprintf(file, "Roll Number: %d\n", students[i].rollNumber);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Total Marks: %d\n", students[i].totalMarks);
        fprintf(file, "\n");
    }

    fclose(file);

    printf("Student details have been written to %s.\n", filename);

    return 0;
}

