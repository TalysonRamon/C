#include<stdio.h>
/*
                            Lista - Questão 108
Faça um programa que leia duas datas, ambas no formato dd/mm/aaaa, e calcule a
quantidade de dias entre essas duas datas.
Dica: a conversão entre formatos de datas pode ser útil à construção deste programa
*/

int main()
{
    int dia, mes, ano, dia2, mes2, ano2;
    int data1, data2;

    printf("Digite a primeira data no formato (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("Digite a segunda data no formato (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia2, &mes2, &ano2);

    data1 = dia + (mes * 31) + (ano * 365);
    data2 = dia2 + (mes2 * 31) + (ano2 * 365);

    if (data1 >= data2){

        printf("Diferença de dias entre datas: %d dias", data1 - data2);
    }
    else
        printf("Diferenca de dias entre datas: %d dias", data2 - data1);

    return 0;
}
