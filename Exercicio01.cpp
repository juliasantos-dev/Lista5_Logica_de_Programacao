#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Maior numero: %d\n", maior(num1, num2));

    return 0;
}