#include<stdio.h>

/*
                            Aula - Questão 1 | Lista IV
Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

int main()
{
    int v1[10], v2[10], i;

    for ( i = 0; i < 10; i++){
        printf("Digite a posicao %d do vetor: ", i);
        scanf("%d", &v1[i]);
        v2[i] = v1[i] * v1[i];
    }
    
    for ( i = 0; i < 9; i++){
        printf("%4d ", v1[i]);
    }

    printf("\n");

    for ( i = 0; i < 9; i++){
        printf("%4d ", v2[i]);
    }
    
    return 0;
}
