#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Aula - Questão 7 | Lista IV
Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
*/

int main()
{
    int v1[100], i, j, aux = 0;

    srand(time(NULL));

    for ( i = 0; i < 100; i++){
        v1[i] = rand() % 1000;
    }
    
    for ( i = 0; i < 100; i++){
        for ( j = 0; j < 99; j++){
            if (v1[j] > v1[j + 1]){
                aux = v1[j + 1];
                v1[j + 1] = v1[j];
                v1[j] = aux;
            }
            
        }
        
    }
    
    printf("\n");
    for ( i = 0; i < 100; i++){
        printf("%d ", v1[i]);
    }
    
    return 0;
}
