#include<stdio.h>
/*
                            Lista - Questão 202
Faça um programa que leia dois números A e B entre 0 e 1000. O programa deverá
somar todos os valores menores que 1000 e que sejam múltiplos de A ou B, mas não de
ambos.
*/

int main()
{
    int n, n1, i, soma = 0;

    do{
        printf("Digite um numero entre 0 e 1000: ");
        scanf("%d", &n);
    } while (n < 0 || n > 1000);

    do{
        printf("Digite outro numero entre 0 e 1000: ");
        scanf("%d", &n1);
    } while (n1 < 0 || n1 > 1000);
    

    for ( i = 1; i < 1000; i++){
        if (((i % n == 0 && i % n1 != 0) || (i % n != 0 && i % n1 == 0)) && (i >= n && i >= n1)){
            printf("%d ", i);
            soma += i;
        }
        
    }
    
    printf("\nSoma: %d", soma);
    return 0;
}
