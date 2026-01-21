#include<stdio.h>
/*
                            Lista - Questão 193
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
Obs.: Considere apenas números positivos.   
*/

int main()
{
    int i, par = 2, soma = 0;

    for ( i = 1; i <= 50; i++){
        soma += par;
        par += 2;
    }

    printf("Soma: %d", soma);

    return 0;
}
