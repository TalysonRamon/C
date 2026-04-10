#include<stdio.h>
/*
                            Lista - Questão 286
Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.
*/

int main()
{
    int i;
    int v[10];

    for ( i = 0; i < 10; i++){
        printf("Digite um valor para a posicao [%d] do vetor: ", i);
        scanf("%d", &v[i]);
        if (v[i] < 0){
            v[i] = 0;
        }
    }

    for ( i = 0; i < 10; i++){
        printf("%4d ", v[i]);
    }
    
    return 0;
}