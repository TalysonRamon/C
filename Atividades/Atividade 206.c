#include<stdio.h>
#include<math.h>
/*
Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 100 números naturais e o quadrado da soma.

Exemplo:
A soma dos quadrados dos dez primeiros números naturais é:
1² + 2² + … + 10² = 385

O quadrado da soma dos dez primeiros números naturais é:
(1 + 2 + … + 10)² = 55² = 3025

A diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado da soma é:
3025 − 385 = 2640.
*/

int main()
{
    int i, soma = 0, soma2 = 0;

    for ( i = 1; i <= 100; i++){
        soma += pow(i, 2);
        soma2 += i;
    }

    printf("A diferenca e: %.0lf", pow(soma2, 2) - soma);
    
    
    return 0;
}
