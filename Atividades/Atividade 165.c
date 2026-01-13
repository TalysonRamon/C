#include<stdio.h>
/*
                            Lista - Questão 165
Faça um programa que leia uma data no formato dd/mm e informe se a data fornecida
é um dos feriados xos do ano. Considere os seguintes feriados: 1 de janeiro (confrater
nização universal), 21 de abril (Tiradentes), 1 de maio (dia do trabalho), 7 de setembro
(independência do Brasil), 12 de outrubro (Nossa Senhora Aparecida, padroeira do
Brasil), 2 de novembro (Finados), 15 de novembro (proclamação da república) e 25 de
dezembro (natal). O programa deverá dizer qual feriado corresponde a data fornecida
(se for feriado)
*/

int main()
{
    int dia, mes;

    printf("Digite uma data (dd/mm): ");
    scanf("%d%d", &dia, &mes);

    if (dia == 1 && mes == 1){
        printf("Confraternizacao universal!");
    }
    else if (dia == 21 && mes == 4){
        printf("Tiradentes!");
    }
    else if (dia == 1 && mes == 5){
        printf("Dia do trabalho");
    }
    else if (dia == 7 && mes == 9){
        printf("Independencia do Brasil!");
    }
    else if (dia == 12 && mes == 10){
        printf("Nossa Senhora Aparecida, padroeira do Brasil");
    }
    else if (dia == 2 && mes == 11){
        printf("Finados");
    }
    else if (dia == 15 && mes == 11){
        printf("Proclamacao da republica!");
    }
    else if (dia == 25 && mes == 12){
        printf("Natal");
    }
    else
        printf("Esta data nao e um feriado!");
    
    return 0;
}
