#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 288
Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros
cada. Crie um novo array C calculando C = A- B. Mostre na tela os dados do array
C.
*/

int main()
{
    int i;
    int A[10], B[10], C[10];

    srand(time(NULL));

    printf("Vetor A: \n");
    for ( i = 0; i < 10; i++){
        A[i] = rand () % 1000;
        B[i] = rand () % 1000;
        printf("%4d ", A[i]);
    }
    
    printf("\nVetor B: \n");
    for ( i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
        printf("%4d ", B[i]);
    }
    
    printf("\nVetor C: \n");
    for ( i = 0; i < 10; i++){
        printf("%4d ", C[i]);
    }
    
    return 0;
}