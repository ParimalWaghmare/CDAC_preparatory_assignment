#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5  // Maximum number of strings in the array

int main() {
    // Declare and initialize an array of strings
    char* strings[MAX_SIZE] = {"apple", "banana", "apple", "orange", "banana"};

    // Display duplicated strings
    printf("Duplicated strings:\n");
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = i + 1; j < MAX_SIZE; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                break;  // Break inner loop if a duplicate is found
            }
        }
    }

    return 0;
}
