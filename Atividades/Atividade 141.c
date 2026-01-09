#include<stdio.h>
/*
Considere a tabela 3.6. Escreva um programa que, dado o valor de venda, imprima a
comissão que deverá ser paga ao fornecedor.
*/

int main()
{
    float  n;

    printf("Digite o valor da venda mensal: ");
    scanf("%f", &n);

    if (n >= 100000){
        printf("Comissao: %.2f R$\n", 700 + (n * 0.17));
    }
    else if (n < 100000 && n >= 80000){
        printf("Comissao: %.2f R$\n", 650 + (n * 0.14));
    }
    else if (n < 80000 && n >= 60000){
        printf("Comissao: %.2f R$\n", 600 + (n * 0.14));
    }
    else if (n < 60000 && n >= 40000){
        printf("Comissao: %.2f R$\n", 550 + (n * 0.14));
    }
    else if (n < 40000 && n >= 20000){
        printf("Comissao: %.2f R$\n", 500 + (n * 0.14));
    }
    else
        printf("Comissao: %.2f R$\n", 400 + (n * 0.14));
    
    return 0;
}
