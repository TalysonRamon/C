#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                                Lista - Questão 290
Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
e os escreva.
*/

int main()
{
    int i, j, k, repetido;
    int v[10];

    srand(time(NULL));

    printf("Vetor: \n");
    for ( i = 0; i < 10; i++){
        v[i] = rand () % 10;
        printf("%d ", v[i]);
    }
    
    printf("\nValores iguais do vetor: \n");
    for ( i = 0; i < 10; i++){
        repetido = 0;
        for ( k = 0; k < i; k++){
            if (v[i] == v[k]){
                repetido = 1;
                break;
            }   
        }

        if (!repetido) {
            for (j = i + 1; j < 10; j++) {
                if (v[i] == v[j]) {
                    printf("%d ", v[i]);
                    break;
                }
            }
        }
    }
    
    return 0;
}