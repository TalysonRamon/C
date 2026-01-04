#include<stdio.h>
/*
                    Lista - Questão 088
Faça um programa que calcule o ano de nascimento de uma pessoa a partir da idade
que a pessoa tinha no dia primeiro de janeiro do ano atual
*/

int main()
{
    int ano;
    char data;

    printf("Digite quantos anos vc tinha no dia primeiro de janeiro deste ano: ");
    scanf("%d", &ano);
    printf("Voce faz aniversario dia primeiro de janeiro (s ou n)? ");
    scanf(" %c", &data);

    if (data == 's'){
        printf("Ano de nascimento: %d", 2026 - ano);
    }
    else
        printf("Ano de nascimento: %d", 2026 - (ano + 1));

    return 0;
}
