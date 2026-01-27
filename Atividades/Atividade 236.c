#include<stdio.h>
/*
                            Lista - Questão 236
Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do chamado Triangulo de Pascal:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

Dica: é possível calcular os valores do triângulo de pascal usando combinação (n k),
onde n representa o número da linha e k o número da coluna.
*/

int main()
{
    int i, n, k, val;

    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);
 
    for ( i = 0; i < n; i++){
        val = 1;
        for ( k = 0; k <= i; k++){
            printf("%d ", val);
            val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }
   
    return 0;
}
