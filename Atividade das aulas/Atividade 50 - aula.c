#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 8 | Lista IV
Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.    
*/

int main()
{
    int m[5][7], soma = 0, i, j;

    srand(time(NULL));

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 7; j++){
            m[i][j] = rand() % 1000;
            soma += m[i][j];
            printf("%d ", m[i][j]);
        }
    }
    

    printf("\nA soma de todos os elementos da matriz e: %d", soma);
    
    return 0;
}
