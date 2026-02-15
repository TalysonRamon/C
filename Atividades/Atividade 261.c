#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 261
Faça um programa que crie um matriz 10x10 com inteiros gerados aleatoriamente. Os
números gerados devem estar no intervalo entre 0 e 10. Mostre a matriz gerada.
*/

int main()
{
    int m[10][10], i, j;

    srand(time(NULL));

    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){
            m[i][j] = rand() % 11;
        }
    }
    
    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}