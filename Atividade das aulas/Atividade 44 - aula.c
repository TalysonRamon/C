#include<stdio.h>
/*
                            Aula - Questão 2 | Lista IV
Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/

int main()
{
    int v1[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int v2[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}, v3[25], i;

    printf("Vetor 1:\n");
    for ( i = 0; i < 25; i++){
        v3[i] = v1[i] + v2[i];
        printf("%d ", v1[i]);
    }

    printf("\nVetor 2:\n");
    for ( i = 0; i < 25; i++){
        printf("%d ", v2[i]);
    }
    
    printf("\nVetor 3:\n");
    for ( i = 0; i < 25; i++){
        printf("%d ", v3[i]);
    }
    
    return 0;
}