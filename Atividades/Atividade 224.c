#include<stdio.h>
/*
                            Lista - Questão 224
Faça um programa que leia 20 inteiros positivos, ignorando não positivos, e imprima
sua média.
*/

int main()
{
    int i, n, soma = 0, cont = 0;

    for ( i = 1; i <= 20; i++){
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);

        if (n > 0){
            soma += n;
            cont++;
        }
        
    }
    
    printf("Media: %.2f", (float)soma / cont);

    return 0;
}
