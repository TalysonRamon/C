#include<stdio.h>
/*
                            Lista - Questão 264
Faça um programa que leia duas matrizes A e B, ambas de tamanho 3x3, calcule e
exiba a matriz C resultante da multiplicação de A por B. Calcule e exiba também uma
matriz D resultante da multiplicação de B por A
*/

int main()
{
    int A[3][3], B[3][3], C[3][3], D[3][3], i, j;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("Digite o valor da matriz A na posicao [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("Digite o valor da matriz B na posicao [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] * B[i][j];
            D[i][j] = B[i][j] * A[i][j];
        }
    }

    printf("\nMatriz C:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz D:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%4d ", D[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}