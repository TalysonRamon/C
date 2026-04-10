#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Lista - Questão 284
Escreva um programa que leia n números inteiros no intervalo [0,50] e os armazene
em um vetor estaticamente alocado com 100 posições. Preencha um segundo vetor,
também alocado estaticamente, apenas com os números ímpares do primeiro vetor.
Imprima os dois vetores, 10 elementos por linha.
*/

int main()
{
    int i, cont = 0, j = 0;
    int v[100];
    int impar[100];

    srand(time(NULL));

    printf("Vetor original: \n");
    for ( i = 0; i < 100; i++){
        v[i] = rand() % 51;
        printf("%4d ", v[i]);
        cont++;

        if ((cont % 10) == 0){
            cont = 0;
            printf("\n");
        }

        if ((v[i] % 2) == 1){
            impar[j] = v[i];
            j++;
        }
    }

    cont = 0;
    printf("\nVetor impar: \n");
    for ( i = 0; i < j; i++){
        printf("%4d ", impar[i]);
        cont++;
        if ((cont % 10) == 0){
            cont = 0;
            printf("\n");
        }
    }
    
    
    return 0;
}
