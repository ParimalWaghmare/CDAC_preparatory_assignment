#include <stdio.h>

// Function to convert decimal to binary
void decToBinary(int n) {
    // Size of an integer in bytes
    int size = sizeof(n) * 8;
    int i;
    
    // Iterate through each bit of the integer
    for (i = size - 1; i >= 0; i--) {
        // Shift right the integer by i bits and check the least significant bit
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int value = 2;

    printf("Decimal value is: %d\n", value);
    printf("Octal value is: %o\n", value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n", value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n", value);
    printf("Binary value is: ");
    decToBinary(value);
    printf("\n");

    return 0;
}
