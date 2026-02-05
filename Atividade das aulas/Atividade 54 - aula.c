#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Aula - Questão 12 | Lista IV
Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

int main()
{
    int m[7][7], i, j, k, n = 0;

    srand(time(NULL));

    for ( i = 0; i < 7; i++){
        for ( j = 0; j < 7; j++){
            m[i][j] = rand() % 1000;
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Matriz Secundaria:\n\n");

    j = 6;
    printf("                                ");
    for ( i = 0; i < 7; i++){
        printf("%3d ", m[i][j]);
        printf("\n");
        j--;
        for ( k = n; k <= 6; k++){
            printf("    ");
        }
        n++;
    }
    
    return 0;
}