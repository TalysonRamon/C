#include<stdio.h>
/*
                    Lista - Questão 257
Faça um programa que leia uma matriz 3x3 e calcule o seu determinante
*/

int main()
{
    int m[3][3], i, j, somal1, somal2, somal3;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    printf("\nMatriz:\n");
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    
    somal1 = m[0][0] * ((m[1][1] * m[2][2]) - (m[1][2] * m[2][1]));
    somal2 = m[0][1] * ((m[1][0] * m[2][2]) - (m[1][2] * m[2][0]));
    somal3 = m[0][2] * ((m[1][0] * m[2][1]) - (m[1][1] * m[2][0]));

    printf("\nDeterminante: %d", somal1 - somal2 + somal3);
    return 0;
}