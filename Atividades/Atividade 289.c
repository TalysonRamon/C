#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 289
Faça um programa que leia dois vetores A e B, com 16 números inteiros cada. Crie
um novo vetor C que possui os elementos de A que não estão presentes em B. Crie
também o vetor D que possui os elementos de B que não estão presentes em A. Mostre
os vetores calculados.
*/

int main()
{
    int i, j, igual = 0, d = 0;
    int A[16], B[16], C[16], D[16];

    srand(time(NULL));

    printf("Vetor A: \n");
    for ( i = 0; i < 16; i++){
        A[i] = rand() % 100;
        B[i] = rand() % 100;
        printf("%d ", A[i]);
    }

    printf("\nVetor B: \n");
    for ( i = 0; i < 16; i++){
        printf("%d ", B[i]);
    }
    
    printf("\nVetor C: \n");
    for ( i = 0; i < 16; i++){
        igual = 0;
        for ( j = 0; j < 16; j++){
            if (A[i] == B[j]){
                igual++;
            }
        }
        if (igual == 0){
            C[d] = A[i];
            d++;
        }
    }

    for ( i = 0; i < d; i++){
        printf("%d ", C[i]);
    }
    
    d = 0;

    printf("\nVetor D: \n");
    for ( i = 0; i < 16; i++){
        igual = 0;
        for ( j = 0; j < 16; j++){
            if (B[i] == A[j]){
                igual++;
            }
        }
        if (igual == 0){
            D[d] = B[i];
            d++;
        }
    }

    for ( i = 0; i < d; i++){
        printf("%d ", D[i]);
    }
    
    return 0;
}