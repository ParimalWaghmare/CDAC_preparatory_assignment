#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
}; // <- Don't forget this semicolon

void readStudent(struct Student *student) {
    printf("Enter student name: \n");
    scanf("%s", student->studentName);

    printf("Enter roll number: \n");
    scanf("%s", student->rollNo);

    printf("Enter total marks obtained: \n");
    scanf("%d", &student->totalMarks); 
}

void displayStudent(struct Student student) {
    printf("Student Name: %s\n", student.studentName);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks obtained: %d\n", student.totalMarks);
}

int main() {
    struct Student student;

    readStudent(&student);

    printf("\nStudent Information:\n");
    displayStudent(student);
    return 0;
}
