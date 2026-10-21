#include <stdio.h>

float volumeCilindro(float altura, float raio) {
    return 3.1414592 * raio * raio * altura;
}

int main() {
    float altura, raio;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Volume do cilindro: %.2f\n",
           volumeCilindro(altura, raio));

    return 0;
}