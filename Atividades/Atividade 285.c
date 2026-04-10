#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Lista - Questão 285
Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

int main()
{
    int i, cont = 0;
    unsigned int v[10];

    srand(time(NULL));

    for ( i = 0; i < 10; i++){
        v[i] = rand() % 1000;
        if ((v[i] % 2) == 0){
            printf("%4d ", v[i]);
            cont++;
        }
    }
    printf("\nQuantidade de numeros pares: %d", cont);
    return 0;
}