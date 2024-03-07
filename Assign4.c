#include <stdio.h>

int main() {
    int marks[6];
    int max_marks = 500; // Assuming 5 subjects each with a maximum of 100 marks
    int total = 0;
    char grade = 'F';

    // Input marks from the user
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    double percentage = ((double)total / max_marks) * 100;

    // Determine grade based on percentage
    if (percentage >= 90) {
        grade = 'E';
    } else if (percentage >= 80 && percentage<90) {
        grade = 'A';
    } else if (percentage >= 70 && percentage<80) {
        grade = 'B';
    } else if (percentage >= 60 && percentage<70) {
        grade = 'C';
    } else if (percentage<60) {
        grade = 'F';
    }


    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
