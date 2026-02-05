#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                        Aula - Questão 14 | Lista IV
Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.
*/

int main()
{
    int m[4][4], i, j, n = 3, k;

    srand(time(NULL));

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            m[i][j] = rand() % 1000;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nValores abaixo da Diagonal Principal:\n\n");
    j = 0;
    for ( i = 1; i < 4; i++){
        printf("%d ", m[i][j]);
        j++;
        printf("\n");
        for ( k = n; k <= 3; k++){
            printf("    ");
        }
        n--;
    }
    
    return 0;
}