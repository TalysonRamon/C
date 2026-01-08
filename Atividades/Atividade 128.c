#include<stdio.h>
/*
                            Lista - Questão 128
Faça um programa que leia uma data no formato dd/mm/aaaa e calcule o dia da se
mana correspondente a data fornecida.
Dica: converter a data para o formato juliano pode facilitar a construção deste pro
grama
*/

 int main()
 {
    int dia, mes, ano, i;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d%d%d", &dia, &mes, &ano);
    

    for ( i = dia; i >= 7; i = i - 7){
    }

    if (i == 1){
       printf("Domingo");
    }
    else if (i == 2){
        printf("Segunda");
    }
    else if (i == 3){
        printf("Terca");
    }
    else if (i == 4){
        printf("Quarta");
    }
    else if (i == 5){
        printf("Quinta");
    }
    else if (i == 6){
        printf("Sexta");
    }
    else 
        printf("Sabado");

    return 0;
 }
 