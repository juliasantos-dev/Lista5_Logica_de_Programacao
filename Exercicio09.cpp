#include <stdio.h>

void somarColunas(int A[61][10]) {
    int i, j, soma;

    for (j = 0; j < 10; j++) {
        soma = 0;

        for (i = 0; i < 60; i++) {
            soma = soma + A[i][j];
        }

        A[60][j] = soma;
    }
}

int main() {
    int A[61][10];
    int i, j;

    for (i = 0; i < 60; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    somarColunas(A);

    printf("\nSoma de cada coluna:\n");

    for (j = 0; j < 10; j++) {
        printf("Coluna %d: %d\n", j + 1, A[60][j]);
    }

    return 0;
}