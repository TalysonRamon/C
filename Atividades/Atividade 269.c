#include<stdio.h>
/*
                            Lista - Questão 269
Faça um programa que leia dois vetores A e B, ambos de tamanho 10 e com valores
inteiros, e calcule o vetor C resultado da interseção entre A e B.
*/

int main()
{
    int i, j, igual = 0, k = 0;
    int A[10], B[10], C[10] = {};

    for ( i = 0; i < 10; i++){
        printf("Digite o valor do primeiro vetor na posicao [%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("\n");
    for ( i = 0; i < 10; i++){
        printf("Digite o valor do segundo vetor na posicao [%d]: ", i);
        scanf("%d", &B[i]);
    }

    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){
            if (A[i] == B[j]){
                C[k] = A[i];
                k++;
                igual++;
            }
        }
    }

    printf("\nVetor com resultado da intersecao:\n");
    for ( i = 0; i < igual; i++){
        printf("%d ", C[i]);
    }

    return 0;
}