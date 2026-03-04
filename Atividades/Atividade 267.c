#include<stdio.h>
/*
                            Lista - Questão 267
Faça um programa que leia um vetor de 10 valores, ordene o vetor decrescentemente e
exiba o vetor ordenado.
Obs: procure fazer este programa sem criar um segundo vetor.
*/

int main()
{
    int i, j;
    float v[10], ordem_decre = 0;

    for ( i = 0; i < 10; i++){
        printf("DIgite o valor do vetor na posicao [%d]: ", i);
        scanf("%f", &v[i]);
    }
    
    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 9 - i; j++){
            if (v[j] < v[j + 1]) {
                ordem_decre = v[j];
                v[j] = v[j + 1];
                v[j + 1] = ordem_decre;
            }   
        }
    }
    
    printf("\nVetor decrescente:\n");
    for ( i = 0; i < 10; i++){
        printf("%.2f ", v[i]);
    }
    
    return 0;
}