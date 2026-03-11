#include<stdio.h>
/*
                            Lista - Questão 270
Leia um vetor A com 25 valores inteiros. Crie um segundo vetor B, também com 25
valores, em que a i-ésima posição de B seja o resultado da média aritmética do i-ésimo
valor de A juntamente com os valores da posições vizinhas à posição i. Exiba o vetor
B.
Obs: este tipo de operação é denominado convolução de A por B
*/

int main()
{
    int i, soma = 0, n = 0, j;
    int A[25] = {};
    float B[25] = {};

    for ( i = 0; i < 25; i++){
        printf("Digite o valor do vetor na posicao [%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    B[0]  = A[0];
    B[24] = A[24];

    for ( i = 1; i < 24; i++){
        soma = 0;
        for ( j = 0 + n; j < 3 + n; j++){
            soma += A[j];
        }
        n++;
        B[i] = soma / 3.0;
    }
    
    printf("Vetor B:\n");
    for ( i = 0; i < 25; i++){
        printf("%.2f ", B[i]);
    }
    
    return 0;
}