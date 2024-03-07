#include <stdio.h>
#include <stdlib.h>

#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2

void mulMat(int mat1[][C1], int mat2[][C2]) {
    int rslt[R1][C2];

    printf("Multiplication of the given two matrices is:\n");

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }

            printf("%d\t", rslt[i][j]);
        }

        printf("\n");
    }
}

int main() {
    int mat1[R1][C1];
    int mat2[R2][C2];

    printf("Enter elements of Matrix-1:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of Matrix-2:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    if (C1 != R2) {
        printf("The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2\n");
        printf("Please update MACROs value according to your array dimension in #define section\n");
        exit(EXIT_FAILURE);
    }

    // Function call
    mulMat(mat1, mat2);

    return 0;
}
