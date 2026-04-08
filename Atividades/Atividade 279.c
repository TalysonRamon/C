#include<stdio.h>
/*
Lista - Questão 279
Faça um programa capaz de multiplicar duas matrizes de tamanhos arbitrários. Exiba
a matriz resultante.
*/

int main()
{
    int linha, coluna, linha2, coluna2;
    int i, j, c, soma = 0;

    printf("Digite o tamanho da linha e coluna da primeira matriz: ");
    scanf("%d%d", &linha, &coluna);
    printf("Digite o tamanho da linha e coluna da segunda matriz: ");
    scanf("%d%d", &linha2, &coluna2);

    int m[linha][coluna];
    int m2[linha2][coluna2];

    for ( i = 0; i < linha; i++){
        for ( j = 0; j < coluna; j++){
            printf("Digite o valor da primeira matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    for ( i = 0; i < linha2; i++){
        for ( j = 0; j < coluna2; j++){
            printf("Digite o valor da segunda matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    
    printf("\nPrimeira Matriz: \n");
    for ( i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
            printf("%8d ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSegunda Matriz: \n");
    for ( i = 0; i < linha2; i++){
        for (j = 0; j < coluna2; j++){
            printf("%8d ", m2[i][j]);
        }
        printf("\n");
    }

    int mr[linha][coluna2];
    
    if (coluna == linha2){
        for ( i = 0; i < linha; i++){
            for (j = 0; j < coluna2; j++){
                soma = 0;
                for (c = 0; c < coluna; c++){
                    soma += m[i][c] * m2[c][j];
                }
                mr[i][j] = soma;
            }
        }
        printf("\nMatriz Resultante: \n");

        for ( i = 0; i < linha; i++){
            for ( j = 0; j < coluna2; j++){
                printf("%8d ", mr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nNao e possivel realizar a operacao com o tamanho da matriz dada!");
    return 0;
}