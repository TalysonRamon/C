#include<stdio.h>
/*
                            Lista - Questão 194
Faça um programa que receba um número maior que 1, e veri que se o número fornecido
é primo ou não.
Obs.: um número é considerado primo quando seus únicos divisores são 1 e o proprio
número.
*/

int main()
{
    int n, i, cont = 0;

    do{
        printf("Digite um numero inteiro maior que um: ");
        scanf("%d", &n);
    } while (n <= 1);

    for ( i = 1; i <= n; i++){
        if (n % i == 0){
            cont++;
        }
    }

    if (cont == 2){
        printf("Numero primo!");
    }
    else
        printf("O numero nao e primo!");
    
    return 0;
}
