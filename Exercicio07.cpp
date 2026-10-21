#include <stdio.h>

void locacoesGratis(int A[], int B[]) {
    int i;

    for (i = 0; i < 500; i++) {
        B[i] = A[i] / 15;
    }
}

int main() {
    int A[500], B[500];
    int i;

    for (i = 0; i < 500; i++) {
        printf("Quantidade de filmes do cliente %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    locacoesGratis(A, B);

    for (i = 0; i < 500; i++) {
        printf("Cliente %d: %d locacoes gratis\n", i + 1, B[i]);
    }

    return 0;
}