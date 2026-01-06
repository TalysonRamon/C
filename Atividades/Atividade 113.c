#include<stdio.h>
/*
                            Lista - Questão 113
Faça um programa que leia um valor de uma variável inteira x e imprima dois valores,
formatados como inteiros, sendo o primeiro deles o resultado da expressão lógica x <= 0
e o segundo o resultado da expressão lógica x < 0. Quais são os valores exibidos como
resultado na tela? O que signi cam esses valores?
*/

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);
    
    printf("%d\n", x <= 0);
    printf("%d", x < 0);
    /*
    Quando x = 0 --> 1 0
    Quando x = -1 --> 1 1
    Quando x = 10 --> 0 0
    Os valores recebidos sao de verdadeiro = 1 ou falso = 0;
    */
    
    return 0;
}
