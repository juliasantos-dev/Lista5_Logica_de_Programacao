#include <stdio.h>

int opcoes() {
    int opcao;

    printf("\n--- OPCOES DE PAGAMENTO ---\n");
    printf("1 - A vista com 10%% de desconto\n");
    printf("2 - Em duas vezes sem juros\n");
    printf("3 - De 3 ate 10 vezes com juros\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

float vista(float valor) {
    return valor * 0.90;
}

float duasVezes(float valor) {
    return valor;
}

float parcelado(float valor, int parcelas) {
    return valor * (1 + 0.03 * parcelas);
}

int main() {
    float valor, total, parcela;
    int opcao, quantidade;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    opcao = opcoes();

    switch (opcao) {
        case 1:
            total = vista(valor);
            printf("Total a vista: R$ %.2f\n", total);
            break;

        case 2:
            total = duasVezes(valor);
            printf("Total: R$ %.2f\n", total);
            printf("2 parcelas de R$ %.2f\n", total / 2);
            break;

        case 3:
            if (valor > 100) {
                printf("Digite a quantidade de parcelas (3 a 10): ");
                scanf("%d", &quantidade);

                if (quantidade >= 3 && quantidade <= 10) {
                    total = parcelado(valor, quantidade);
                    parcela = total / quantidade;

                    printf("Total com juros: R$ %.2f\n", total);
                    printf("Parcelas de R$ %.2f\n", parcela);
                } else {
                    printf("Quantidade de parcelas invalida!\n");
                }
            } else {
                printf("Esta opcao so vale para compras acima de R$ 100,00.\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}