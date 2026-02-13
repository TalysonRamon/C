#include<stdio.h>
/*
                            Lista - Questão 251
Faça um programa que declare um vetor de inteiros com 12 posições. Peça para o
usuário informar os valores para preenchimento deste vetor e, no nal, exiba o conteúdo
do vetor
*/

int main()
{
    int v[12], i;

    for ( i = 0; i < 12; i++){
        printf("Digite um valor inteiro para o vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nVetor digitado:\n");
    for ( i = 0; i < 12; i++){
        printf("%d ", v[i]);
    }

    return 0;
}