#include<stdio.h>
/*
                        Lista - Questão 168
Faça um programa que leia duas datas, ambas no formato dd/mm/aaaa, e veri que
e mostre qual das datas é a mais recente. Obs.: não use conversão entre formatos de
data neste programa.
*/

int main()
{
    int dia, mes, ano, dia1, mes1, ano1, tot1, tot2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia1, &mes1, &ano1);

    tot1 = dia + (mes * 31) + (ano * 365);
    tot2 = dia1 + (mes1 * 31) + (ano1 * 365);

    if (tot1 > tot2){
        printf("A data mais recente e: %2d/%2d/%4d", dia, mes, ano);
    }
    else
        printf("A data mais recente e: %2d/%2d/%4d", dia1, mes1, ano1);
    
    return 0;
}
