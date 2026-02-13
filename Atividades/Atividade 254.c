#include<stdio.h>
/*
                                Lista - Questão 254
Faça um programa que leia uma matriz 3x3 de números inteiros e exiba o conteúdo na
tela.
Obs: ao exibir o conteúdo da matriz, procure organizar os valores em três linhas e com
as colunas alinhadas.
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
    
    return 0;
}