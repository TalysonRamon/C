#include<stdio.h>
/*
                        Lista - Questão 250
Faça um programa que declare um vetor de 10 valores reais e exiba seu conteúdo. Teste
o resultado obtido quando usando uma das seguintes inicializações do vetor:
• double vetor[] = {0.8, 1.6, 2.3, 3.1, 3.9, 4.7, 5.5, 6.3, 7.0, 7.9};
• double vetor[10]={0.8, 1.6, 2.3, 3.1, 3.9, 4.7, 5.5, 6.3, 7.0, 7.9};
• double vetor[10]={};
• double vetor[10]={0.8, 1.6, 2.3, 3.1, 3.9};
Explique por que estas inicializações funcionam.
*/

int main()
{
    int i;
    float v1[] = {0.8, 1.6, 2.3, 3.1, 3.9, 4.7, 5.5, 6.3, 7.0, 7.9};
    float v2[10] = {0.8, 1.6, 2.3, 3.1, 3.9, 4.7, 5.5, 6.3, 7.0, 7.9};
    float v3[10] = {};
    float v4[10] = {0.8, 1.6, 2.3, 3.1, 3.9};

    printf("Vetor 1:\n");
    for ( i = 0; i < 10; i++){
        printf("%.2f ", v1[i]);
    }

    printf("\nVetor 2:\n");
    for ( i = 0; i < 10; i++){
        printf("%.2f ", v2[i]);
    }
    
    printf("\nVetor 3:\n");
    for ( i = 0; i < 10; i++){
        printf("%.2f ", v3[i]);
    }
    
    printf("\nVetor 4:\n");
    for ( i = 0; i < 10; i++){
        printf("%.2f ", v4[i]);
    }
    
    return 0;
}