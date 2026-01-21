#include<stdio.h>
/*
                            Lista - Questão 197
Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
linhas do triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

int main()
{
    int n, i, h, g = 0, p = 1;

    do{
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);

    for ( i = 1; i <= n; i++){
        for ( h = 1; h <= p; h++){
            g++;
            printf("%d ", g);
        }
        printf("\n");
        p++;
    }

    return 0;
}