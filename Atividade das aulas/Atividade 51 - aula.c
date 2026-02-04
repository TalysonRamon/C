#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Aula - Questão 9 | Lista IV
Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/

int main()
{
    int m[5][10], i, j, linha[5] = {}, coluna[10] = {};

    srand(time(NULL));

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 10; j++){
            m[i][j] = rand() % 1000;
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nLinha: ");

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 10; j++){
            linha[i] += m[i][j];
        }
        printf("%d ", linha[i]);
    }
    
    printf("\nColuna: ");
    for ( j = 0; j < 10; j++){
        for ( i = 0; i < 5; i++){
            coluna[j] += m[i][j];
        }
        printf("%d ", coluna[j]);
    }

    return 0;
}
