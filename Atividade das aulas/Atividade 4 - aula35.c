/*
Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float ndias;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &ndias);

    printf("A quntidade total a ser paga é: %.2f", 45 * ndias - (45 * ndias * (8 / 100.0)));
    return 0;
}
