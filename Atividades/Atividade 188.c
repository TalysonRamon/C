#include<stdio.h>
/*
                            Lista - Questão 188
Escreva um programa que aceite um número inteiro maior que zero e devolva a soma de
todos os seus algarismos. Por exemplo, se o usuário fornecer o número 251, o resultado
será 8 (que corresponde a 2+5+1). Se o número fornecido pelo usuário não for maior
que zero, o programa deve apresentar uma mensagem de erro e finalizar.
*/

int main()
{
    int num, d1, d2, d3, d4, d5;
    printf("Digite um numero maior que zero: ");
    scanf("%d", &num);

    if (num > 0){
        d5 = (num / 10000);
        d4 = (num / 1000) % 10;
        d3 = ((num % 1000) / 100);
        d2 = (num % 100) / 10;
        d1 = num % 10;

        printf("Soma: %d", d1 + d2 + d3 + d4 + d5);
    }
    else
        printf("Erro! Numero menor que zero!");
    return 0;
}
