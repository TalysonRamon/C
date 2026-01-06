#include<stdio.h>
/*
                                Lista - Questão 106
Faça um programa que converta uma data no formato gregoriano (dd/mm/aaaa) para
o formato juliano.
*/

int main()
{
    int dia, mes, ano;

    printf("Digite a data no formato: (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    dia = dia - 13;

    if (dia > 31){
        mes++;
        int ndia = dia % 31;
        if (mes > 12){
            ano++;
            int nmes = mes % 12;

            printf("Data em Juliano: %.2d/%.2d/%.4d", ndia, nmes, ano);
        }
        printf("Data em Juliano: %.2d/%.2d/%.4d", ndia, mes, ano);
    }

    if (dia <= 0)
    {
        dia = 31 + dia;
        mes--;
        if (mes <= 0)
        {
            mes = 12 + mes;
            ano--;
        }
        
    }

    printf("Data em Juliano: %.2d/%.2d/%.4d", dia, mes, ano);

    return 0;
}
