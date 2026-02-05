#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                    Aula - Questão 11 | Lista IV
Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/

int main()
{
    int m[5][5], i, j, n = 4;

    srand(time(NULL));

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            m[i][j] = rand() % 1000;
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal Principal:\n\n");
    for ( i = 0; i < 5; i++){
        printf(" %4d ", m[i][i]);
        printf("\n");
        for ( j = n; j <= 4; j++){
            printf("    ");
        }    
        n--;
    }
    
    return 0;
}