#include<stdio.h>
/*
                        Lista - Questão 253
Faça um programa que possua um array de nome A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
Atribua os seguintes valores a este array: 1, 0, 5,-2,-5, 7.
• Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do array e mostre na tela esta soma.
• Modifique o array na posição 4, atribuindo a esta posição o valor 100.
• Mostre na tela cada valor do array A, um em cada linha.
*/

int main()
{
    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0, i;

    soma = (A[0] + A[1] + A[5]);
    printf("Soma: %d", soma);
    
    A[4] = 100;

    printf("\nVetor:\n");
    for ( i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
    
    return 0;
}
