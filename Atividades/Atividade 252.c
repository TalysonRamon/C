#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
                            Lista - Questão 252
Faça um programa que leia 11 valores inteiros e os armazene em um vetor. O programa
deve exibir o programa em ordem direta (do primeiro elemento até o último) e em
ordem inversa (do último elemtno até o primeiro).
Exemplo:
vetor: [1,3,5,2,6,0]
ordem direta: 1 3 5 2 6 0
ordem inversa: 0 6 2 5 3 1
*/

int main()
{
    int v[11], i;

    srand(time(NULL));

    printf("Ordem direta: ");
    for ( i = 0; i < 11; i++){
        v[i] = rand();
        printf("%d ", v[i]);
    }
    
    printf("\nOrdem inversa: ");
    for ( i = 10; i >= 0; i--){
        printf("%d ", v[i]);
    }
    
    return 0;
}