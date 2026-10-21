#include <stdio.h>

float volumeEsfera(float raio) {
    return (4.0 / 3.0) * 3.1414592 * raio * raio * raio;
}

int main() {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Volume da esfera: %.2f\n",
           volumeEsfera(raio));

    return 0;
}