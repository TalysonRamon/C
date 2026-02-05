#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                        Aula - Questão 13 | Lista IV
Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
tela.
*/

int main()
{
    int m[5][4], i, j;

    srand(time(NULL));

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 4; j++){
            m[i][j] = rand() % 1000;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz Transposta:\n\n");

    for ( j = 0; j < 4; j++){
        for ( i = 0; i < 5; i++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
