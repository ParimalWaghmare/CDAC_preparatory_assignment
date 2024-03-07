#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents = 0;

    // Read names of students
    printf("Enter at most 10 names of students (press Enter after each name, type 'end' to finish):\n");
    while (numStudents < MAX_STUDENTS) {
        printf("Name %d: ", numStudents + 1);
        if (fgets(nameOfStudents[numStudents], MAX_NAME_LENGTH, stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }
        // Remove newline character if present
        nameOfStudents[numStudents][strcspn(nameOfStudents[numStudents], "\n")] = '\0';

        // Check if the user wants to end input
        if (strcmp(nameOfStudents[numStudents], "end") == 0) {
            break;
        }
        numStudents++;
    }

    // Sort the array of strings
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);

    // Display sorted names
    printf("\nSorted names:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
