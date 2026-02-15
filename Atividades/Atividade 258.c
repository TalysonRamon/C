#include<stdio.h>
/*
                            Lista - Questão 258
Faça um programa que leia um número n entre 2 e 10 correpondente a ordem de uma
matriz. A seguir, crie e exiba uma matriz identidade de ordem n.
Dica: uma matriz identidade é uma matriz que possui valor 1 na sua diagonal principal
e valor 0 nas demais posições da matriz.
*/

int main()
{
    int n, i, j;

    do{
        printf("Digite um numero entre 2 e 10: ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);
    
    int m[n][n];

    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            if (i == j){
                m[i][j] = 1;
            }
            else
                m[i][j] = 0;
        }
    }
    
    printf("\nMatriz:\n");
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}