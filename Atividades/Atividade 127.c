#include<stdio.h>
/*
                            Lista - Questão 127
Usando o switch, escreve um programa que leia um número inteiro de 1 a 7 e imprima
o dia da semana correspondente a este número, isto é, domingo=1, segunda feira=2,
etc.
*/

int main()
{
    int n;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Dia correspondente:\n");
        printf("Domingo");
        break;
    case 2:
        printf("Dia correspondente:\n");
        printf("Segunda");
        break;
    case 3: 
        printf("Dia correspondente:\n");
        printf("Terca");
        break;
    case 4:
        printf("Dia correspondente:\n");
        printf("Quarta");
        break;
    case 5: 
        printf("Dia correspondente:\n");
        printf("Quinta");
        break;
    case 6: 
        printf("Dia correspondente:\n");
        printf("Sexta");
    case 7: 
        printf("Dia correspondente:\n");
        printf("Sabado");
    default:
        printf("Numero errado!! Tente novamente!");
        break;
    }

    return 0;
}
