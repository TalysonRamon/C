#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Aula - Questão 10 | Lista IV
Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes.
*/

int main()
{
    int A[3][3], B[3][3], C[3][3], i, j;

    srand(time(NULL));

    printf("Matriz A:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            A[i][j] = rand() % 1000;
            B[i][j] = rand() % 1000;
            C[i][j] = A[i][j] + B[i][j];
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz C:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}