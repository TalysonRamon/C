#include<stdio.h>
/*
                            Lista - Questão 107
Faça um programa que converta uma data no formato juliano para o formato gregoriano
(dd/mm/aaaa)
*/

int main()
{
    int dia, mes, ano;

    printf("Digite a data no formatdo (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    dia = dia + 13;

    if (dia > 31){
        int ndia = dia % 31;
        mes ++;
        if (mes > 12){
            int nmes = mes % 12;
            ano++;

            printf("Data formato gregoriano: %.2d/%.2d/%.4d\n", ndia, nmes, ano);
        }
        else
            printf("Data formato gregoriano: %.2d/%.2d/%.4d\n", ndia, mes, ano);
    }
    else
        printf("Data formato gregoriano: %.2d/%.2d/%.4d\n", dia, mes, ano);

    return 0;
}
