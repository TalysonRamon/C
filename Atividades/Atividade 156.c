#include<stdio.h>
/*
                        Lista - Questão 156
Faça um programa que leia uma data no formato dd/mm/aaaa e mostre, por extenso,
a data fornecida.
Exemplo: 25/12/2000 deverá resultar em: 25 de dezembro de 2000
*/

int main()
{
    int dia, mes, ano;

    printf("Digite uma data dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch (mes)
    {
    case 1:
        printf("%d de Janeiro de %d", dia, ano);
        break;
    case 2:
        printf("%d de Fevereiro de %d", dia, ano);
        break;
    case 3:
        printf("%d de Marco de %d", dia, ano);
        break;
    case 4:
        printf("%d de abril de %d", dia, ano);
        break;
    case 5:
        printf("%d de Maio de %d", dia, ano);
        break;
    case 6:
        printf("%d de junho de %d", dia, ano);
        break;
    case 7:
        printf("%d de julho de %d", dia, ano);
        break;
    case 8:
        printf("%d de agosto de %d", dia, ano);
        break;
    case 9:
        printf("%d de Setembro de %d", dia, ano);
        break;
    case 10:
        printf("%d de outubro de %d", dia, ano);
        break;
    case 11:
        printf("%d de novembro de %d", dia, ano);
        break;
    case 12:
        printf("%d de dezembro de %d", dia, ano);
        break;
    default:
        printf("Esse valor nao corresponde a um mes do ano!");
        break;
    }
    return 0;
}
