#include<stdio.h>
/*
                        Lista - Questão 118
Ler o ano de nascimento de uma pessoa e o ano atual, calcular a idade da pessoa.
*/

int main()
{
    int ano, anoatu;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatu);

    printf("Idade: %d", anoatu - ano);
    
    return 0;
}
