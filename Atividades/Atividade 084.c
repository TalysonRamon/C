#include<stdio.h>
/*
Lista - Questão 084
Faça um programa para conversão monetária de reais (R$) para dólares (US$). O
usuário deve fornecer o valor da cotação do dólar.
*/
int main()
{
    float real, cot;

    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cot);

    printf("Convertendo: %.2f $", real / cot);
    return 0;
}
