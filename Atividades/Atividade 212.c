#include<stdio.h>
/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente e decrescente.
*/

int main()
{
    int i, n, h;

    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Ordem Crescente: ");
    for ( i = 0; i <= n; i++){
        printf("%d ", i);
    }

    printf("\nOrdem descrescente: ");
    for ( h = n; h >= 0; h--){
        printf("%d ", h);
    }
    
    
    
    return 0;
}
