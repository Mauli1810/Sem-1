#include <stdio.h>

#define NUM_STUDENTS 10

typedef struct {
    char roll_no[20];
    int subject1;
    int subject2;
    int subject3;
    int total_marks;
} Student;

void read_student_data(Student students[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%s", students[i].roll_no);
        printf("Enter marks for Subject 1: ");
        scanf("%d", &students[i].subject1);
        printf("Enter marks for Subject 2: ");
        scanf("%d", &students[i].subject2);
        printf("Enter marks for Subject 3: ");
        scanf("%d", &students[i].subject3);
        students[i].total_marks = students[i].subject1 + students[i].subject2 + students[i].subject3;
    }
}

void calculate_total_marks(Student students[]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Roll No: %s, Total Marks: %d\n", students[i].roll_no, students[i].total_marks);
    }
}

void find_highest_marks(Student students[]) {
    int highest_subject1 = 0, highest_subject2 = 0, highest_subject3 = 0;
    int roll_no_subject1, roll_no_subject2, roll_no_subject3;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].subject1 > highest_subject1) {
            highest_subject1 = students[i].subject1;
            roll_no_subject1 = i;
        }
        if (students[i].subject2 > highest_subject2) {
            highest_subject2 = students[i].subject2;
            roll_no_subject2 = i;
        }
        if (students[i].subject3 > highest_subject3) {
            highest_subject3 = students[i].subject3;
            roll_no_subject3 = i;
        }
    }

    printf("Highest in Subject 1: %d (Roll No: %s)\n", highest_subject1, students[roll_no_subject1].roll_no);
    printf("Highest in Subject 2: %d (Roll No: %s)\n", highest_subject2, students[roll_no_subject2].roll_no);
    printf("Highest in Subject 3: %d (Roll No: %s)\n", highest_subject3, students[roll_no_subject3].roll_no);
}

void find_highest_total_marks(Student students[]) {
    int highest_total = 0;
    int roll_no_highest_total;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (students[i].total_marks > highest_total) {
            highest_total = students[i].total_marks;
            roll_no_highest_total = i;
        }
    }

    printf("Highest Total Marks: %d (Roll No: %s)\n", highest_total, students[roll_no_highest_total].roll_no);
}

int main() {
    Student students[NUM_STUDENTS];

    read_student_data(students);
    calculate_total_marks(students);
    find_highest_marks(students);
    find_highest_total_marks(students);

    return 0;
}

