#include<stdio.h>
/*
                            Lista - Questão 213
Faça um programa que leia um número inteiro positivo par N e imprima todos os
números pares de 0 até N em ordem crescente e todos os números ímpares em ordem
decrescente
*/

int main()
{
    int n, j, i;

    do
    {
        printf("Digite um numero inteiro positivo par: ");
        scanf("%d", &n);
    } while ((n <= 0) || (n % 2 == 1));

    printf("Par: ");
    for ( i = 0; i <= n; i += 2){
        printf("%d ", i);
    }

    printf("\nImpar: ");
    for ( j = n - 1; j >= 1; j -= 2){
        printf("%d ", j);
    }
    
    return 0;
}
