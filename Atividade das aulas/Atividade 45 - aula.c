#include<stdio.h>
/*
                            Aula - Questão 3 | Lista IV
Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.
*/

int main()
{
    int v1[20], v2[20], i, j;

    for ( i = 0; i < 20; i++){
        printf("Digite a posicao %d do vetor: ", i);
        scanf("%d", &v1[i]);
        v2[i] = v1[i];
    }
    
    for ( i = 0; i < 20; i++){
        printf("%d ", v1[i]);
    }
    
    printf("\n");

    i = 0;
    for ( j = 19; j >= 0; j--){
        v1[i] = v2[j];
        i++;
    }

    for ( i = 0; i < 20; i++){
        printf("%d ", v1[i]);
    }

    return 0;
}