#include<stdio.h>
/*
                                Lista - Questão 161
O custo ao consumidor de um carro novo é a soma do custo da fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de
fábrica, de acordo com a tabela 3.10. Faça um programa que leia o custo de fábrica e
escreva o custo do consumidor
*/

int main()
{
    float custo;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo);

    if (custo <= 12000){
        printf("Custo do consumindor: %.2f R$", custo + (custo * 0.05));
    }
    else if (custo > 12000 && custo <= 25000){
        printf("Custo do consumindor: %.2f R$", custo + ((custo * 0.10) + (custo * 0.15)));
    }
    else
        printf("Custo do consumindor: %.2f R$", custo + (custo * 0.15) + (custo * 0.20));
    
    return 0;
}
