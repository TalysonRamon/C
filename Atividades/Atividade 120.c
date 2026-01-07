#include<stdio.h>
/*
                            Lista - Questão 120
Faça um programa que leia um número inteiro e veri que se o mesmo é par ou ímpar
*/

int main()
{
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if ((n1 % 2) == 0){
        printf("%d e par!", n1);
    }
    else
        printf("%d e impar!", n1);
    
    return 0;
}
