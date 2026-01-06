#include<stdio.h>
/*
                            Lista - Questão 110
Uma empresa paga R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora extra.
Escreva um programa que leia o total de horas normais e o total de horas extras
trabalhadas por um empregado em um ano e calcule o salário anual deste trabalhador
*/

int main()
{
    float horas, horasex;

    printf("Digite as horas normais trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o total de horas extras: ");
    scanf("%f", &horasex);

    printf("Salario anual: %.2f", (horas * 10) + (horasex * 15));

    return 0;
}
