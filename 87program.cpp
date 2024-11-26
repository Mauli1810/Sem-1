#include <stdio.h>

#define STUDENT_COUNT 10
struct Student {
    char name[50];
    int marks;
};


void readStudents(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
}


void displayTopStudents(struct Student students[], int count) {
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].marks > 500) {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    struct Student students[STUDENT_COUNT];

    
    readStudents(students, STUDENT_COUNT);

    
    displayTopStudents(students, STUDENT_COUNT);

    return 0;
}

