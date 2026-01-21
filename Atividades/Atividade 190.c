#include<stdio.h>
/*
                            Lista - Questão 190
Leia um número positivo, calcule e mostre a sequeência de Fibonacci até o primeiro
número superior ao número lido.
Exemplo: se o usuário fornecer o valor 30, a sequência a ser impressa será: 0 1 1 2 3 5
8 13 21 34
*/

int main()
{
    int n, soma = 0, ant = 0, nd = 1;

    do{
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("0 ");
    do{
        soma = nd + ant;
        nd = ant;
        ant = soma;
        printf("%d ", soma);
    }while (soma <= n);
    
    return 0;
}
