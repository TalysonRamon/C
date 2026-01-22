#include<stdio.h>
/*
                            Lista - Questão 203
Faça um programa que some os termos de valor par da sequência de Fibonacci, cujos
valores não ultrapassem quatro milhões.
*/

int main()
{
    int ant = 0, soma = 0, d = 1, par = 0, i;

    for ( i = 1; i <= 1;){
        if (soma <= 4000000){
            ant = soma; 
            soma = ant + d; 
            d = ant; 
            if(soma >= 4000000){
                i++;
            }
            if (soma % 2 == 0){
                par += soma;
            }
        }
    }

    printf("Soma par: %d", par);
    return 0;
}
