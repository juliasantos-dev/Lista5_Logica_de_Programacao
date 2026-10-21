#include <stdio.h>

void alterarMatriz(int A[10][10]) {
    int i, j, temp;

    for (j = 0; j < 10; j++) {
        temp = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = temp;
    }

    for (i = 0; i < 10; i++) {
        temp = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = temp;
    }

    for (i = 0; i < 5; i++) {
        temp = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = temp;
    }

    for (i = 0; i < 10; i++) {
        temp = A[4][i];
        A[4][i] = A[i][9];
        A[i][9] = temp;
    }
}

int main() {
    int A[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    alterarMatriz(A);

    printf("\nMatriz alterada:\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}