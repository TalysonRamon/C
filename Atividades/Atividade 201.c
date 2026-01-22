#include<stdio.h>
/*
                            Lista - Questão 201
Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 e de 5.
*/

int main()
{
    int i, soma = 0;

    for ( i = 1; i <= 1000; i++){
        if (i % 3 == 0 && i % 5 == 0){
            soma += i;
        }
    }
    printf("Soma: %d", soma);

    return 0;
}
