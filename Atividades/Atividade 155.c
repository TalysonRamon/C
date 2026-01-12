#include<stdio.h>
/*
                            Lista - Questão 155
Faça um programa que informe o mês de acordo com o número informado pelo usuário.
Por exemplo, se o usuário informa o valor 4, a saída do programa deverá ser Abril
*/

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Janeiro!");
        break;
    case 2:
        printf("Fevereiro!");
        break;
    case 3:
        printf("Marco!");
        break;
    case 4:
        printf("Abril!");
        break;
    case 5:
        printf("Maio!");
        break;
    case 6:
        printf("Junho!");
        break;
    case 7:
        printf("Julho!");
        break;
    case 8:
        printf("Agosto!");
        break;
    case 9:
        printf("Setembro!");
        break;
    case 10:
        printf("Outubro!");
        break;
    case 11:
        printf("Novembro!");
        break;
    case 12:
        printf("Dezembro!");
        break;
    default:
        printf("Esse valor nao corresponde a um mes do ano!");
        break;
    }
    return 0;
}
