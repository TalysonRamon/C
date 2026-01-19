#include<stdio.h>
/*
                            Aula - Questão 41
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y,
passando para a próxima linha a cada X números.
Exemplo de entrada:
3 99
Exemplo de saída:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*/

int main()
{
    int i, d = 1, cont, j, n;

    printf("Digite dois numeros: ");
    scanf("%d%d", &n, &cont);

    for ( i = d; i <= cont;)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d ", i++);
        }
        printf("\n");
        d += n;
    }
    
    return 0;
}
