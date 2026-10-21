#include <stdio.h>

float converter(float fahrenheit) {
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    float fahrenheit;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperatura em Celsius: %.2f\n",
           converter(fahrenheit));

    return 0;
}