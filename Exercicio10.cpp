#include <stdio.h>

int bissexto(int ano) {
    return (ano % 400 == 0) ||
           (ano % 4 == 0 && ano % 100 != 0);
}

int diasNoMes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    if (mes == 2 && bissexto(ano)) {
        return 29;
    }

    return dias[mes - 1];
}

void calcularIdade(int dn, int mn, int an,
                   int hojeD, int hojeM, int hojeA) {
    int anos, meses, dias;

    anos = hojeA - an;
    meses = hojeM - mn;
    dias = hojeD - dn;

    if (dias < 0) {
        meses--;
        dias += diasNoMes(hojeM == 1 ? 12 : hojeM - 1,
                         hojeM == 1 ? hojeA - 1 : hojeA);
    }

    if (meses < 0) {
        anos--;
        meses += 12;
    }

    printf("Idade: %d anos, %d meses e %d dias\n",
           anos, meses, dias);
}

int main() {
    int dn, mn, an;
    int hojeD, hojeM, hojeA;

    printf("Digite o dia, mes e ano de nascimento: ");
    scanf("%d %d %d", &dn, &mn, &an);

    printf("Digite o dia, mes e ano atual: ");
    scanf("%d %d %d", &hojeD, &hojeM, &hojeA);

    calcularIdade(dn, mn, an, hojeD, hojeM, hojeA);

    return 0;
}