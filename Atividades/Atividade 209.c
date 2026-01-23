#include<stdio.h>
/*
                        Lista - Questão 209
Faça um programa que calcule a soma de todos os números primos abaixo de dois
milhões.
*/

int main()
{
    int i, h, cont = 0;
    double soma = 2;

    for ( i = 3; i < 2000000; i += 2){
        cont = 0;
        for (h = 3; h * h <= i; h += 2){
            if (i % h == 0){
                cont = 1;
                break;
            }
        }

        if (cont == 0){
            soma += i;
        }
    }
    printf("Soma: %.0lf", soma);
    return 0;
}
