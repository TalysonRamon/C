#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data gregoriana (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    dia -= 13;

    if (dia <= 0) {
        mes--;

        if (mes == 0) {
            mes = 12;
            ano--;
        }

        // Dias do mês anterior (juliano)
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
            mes == 8 || mes == 10 || mes == 12)
            dia += 31;
        else if (mes == 2)
            dia += 28; // fevereiro no juliano
        else
            dia += 30;
    }

    printf("Data no calendario juliano: %02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}
