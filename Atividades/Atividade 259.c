#include<stdio.h>
/*
                        Lista - Questão 259
Faça um programa que leia uma matriz 3x3 e veri que se a mesma é uma matriz
simétrica.
Dica: em uma matriz simétrica os valores acima da diaginal principal são iguais aos
valores abaixo da diagonal principal.
*/

int main()
{
    int m[3][3], i, j;

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
    
    if ((m[0][1] + m[1][2]) == (m[1][0] + m[2][1])){
        printf("\nA matriz digitada e simetrica!\n");
    }
    else
        printf("\nA matriz digitada nao e simetrica!\n");
    return 0;
}