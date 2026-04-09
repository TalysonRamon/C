#include<stdio.h>
/*
                            Lista - Questão 283
Escreva um programa que leia n números inteiros e os armazene em um vetor. Imprima
o vetor, o maior e o menor elemento e a posição que eles se encontram
*/

int main()
{
    int pos_menor = 0, pos_maior = 0;
    int n, i, maior = 0, menor = 0;

    printf("Digite a quantidade de numeros que deseja ler: ");
    scanf("%d", &n);   

    int num[n];

    for ( i = 0; i < n; i++){
        printf("Digite o numero da posicao [%d]: ", i);
        scanf("%d", &num[i]);
    }
    
    maior = num[0];
    menor = num[0];
    printf("\nVetor: \n");
    for ( i = 0; i < n; i++){
        printf("%d ", num[i]);
        if (menor > num[i]){
            menor = num[i];
            pos_menor = i;
        }
        if (maior < num[i]){
            maior = num[i];
            pos_maior = i;
        }
    }

    printf("\nMaior numero: %d - [%d]", maior, pos_maior);
    printf("\nMenor numero: %d - [%d]", menor, pos_menor);
    
    return 0;
}