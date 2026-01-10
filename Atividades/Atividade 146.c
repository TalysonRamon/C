#include<stdio.h>
/*
                            Lista - Questão 146
Faça um programa em que o usuário digite uma senha numérica, e o programa deverá
reconhecer se a senha é verdadeira ou falsa, de acordo com um valor estabelescido
previamente no programa
*/

int main()
{
    int senha = 101205, n;

    printf("Digite a senha para entrar: ");
    scanf("%d", &n);

    if (n == senha){
        printf("Seja bem vindo!");
    }
    else
        printf("Senha incorreta!");
    return 0;
}
