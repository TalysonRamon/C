#include<stdio.h>
/*
                    Lista - Questão 256
Faça um programa que leia uma matriz 2x2 e calcule o seu determinante.
*/

int main()
{
    int m[2][2], i, j;

    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nValor do determinante: %d", (m[0][0] * m[1][1]) - (m[0][1] * m[1][0]));
    return 0;
}
