#include<stdio.h>
/*
                    Lista - Questão 260
Faça um programa que leia um vetor de tamanho 10 com valores inteiros e informe
qual é o menor e o maior valor contido no vetor.
*/

int main()
{
    int v[10], i, maior = 0, menor = 0;

    for ( i = 0; i < 10; i++){
        printf("Digite o valor do vetor na posicao [%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    menor = v[0];
    maior = v[0];

    for ( i = 1; i < 10; i++){
        if (menor > v[i]){
            menor = v[i];
        }
        if (maior < v[i]){
            maior = v[i];
        }
    }

    printf("\nVetor:\n");
    for ( i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    
    printf("\nMaior: %d\nMenor: %d", maior, menor);

    return 0;
}