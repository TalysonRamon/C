#include<stdio.h>
/*
                            Lista - Questão 217
Escreva um programa que leia 10 números e escreva a diferença entre o menor valor
lido e o maior valor lido.
*/

int main()
{
    int n, maior, menor, i;

    printf("Digite um numero: ");
    scanf("%d", &n);
    maior = n;
    menor = n;

    for ( i = 1; i <= 9; i++){
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (maior < n){
            maior = n;
        }
        if (menor > n){
            menor = n;
        }
    }

    printf("Diferenca entre maior e menor: %d", maior - menor);
    
    return 0;
}
