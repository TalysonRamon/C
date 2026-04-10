#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                        Lista - Questão 287
Considere um vetor A com 11 elementos onde A1 < A2 < .. < A6 > A7 > A8 > ... >
A11, ou seja, está ordenado em ordem crescente até o sexto elemento, e a partir desse
elemento está ordenado em ordem decrescente. Proponha um algoritmo para ordenar
os elementos.
*/

int main()
{
    int ordem_crescent = 0, ordem_decrescent = 0;
    int i, j;
    int v[11];

    srand(time(NULL));

    for ( i = 0; i < 11; i++){
        v[i] = rand() % 1000;
    }
    
    for ( i = 0; i < 6; i++){
        for ( j = 0; j < 5 - i; j++){
            if (v[j] > v[j + 1]){
                ordem_crescent = v[j];
                v[j] = v[j + 1];
                v[j + 1] = ordem_crescent;
            }
        }
    }
    
    for ( i = 0; i < 11; i++){
        for ( j = 6; j < 10 - i; j++){
            if (v[j] < v[j + 1]){
                ordem_decrescent = v[j];
                v[j] = v[j + 1];
                v[j + 1] = ordem_decrescent;
            }
        }
    }

    for ( i = 0; i < 11; i++){
        printf("%d ", v[i]);
    }
    return 0;
}