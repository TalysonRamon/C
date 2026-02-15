#include<stdio.h>
/*
                            Lista - Questão 262
Faça um programa que leia dois vetores de tamanho 10 com números reais e calcule o
produto escalar entre estes vetores
*/

int main()
{
    float v1[10], v2[10], soma = 0;
    int i;

    for ( i = 0; i < 10; i++){
        printf("Digite o valor do vetor 1 na posicao [%d]: ", i);
        scanf("%f", &v1[i]);
    }

    printf("\n");
    for ( i = 0; i < 10; i++){
        printf("Digite o valor do vetor 1 na posicao [%d]: ", i);
        scanf("%f", &v2[i]);
    }

    printf("\nVetor 1:\n");
    for ( i = 0; i < 10; i++){
        soma += v1[i] * v2[i];
        printf("%4.2f ", v1[i]);
    }
    
    printf("\nVetor 2:\n");
    for ( i = 0; i < 10; i++){
        printf("%4.2f ", v2[i]);
    }
    
    printf("\nO produto escalar entre os vetores e: %.2f", soma);
    
    return 0;
}