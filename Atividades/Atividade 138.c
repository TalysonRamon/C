#include<stdio.h>
/*
                        Lista - Questão 138
Um certo produto irá sofrer aumento de acordo com a tabela 3.4. Faça um programa
que leia o valor atual, calcule e escreva o novo valor do produto. O programa também
deve mostrar uma mensagem de acordo com a tabela 3.5.
*/

int main()
{
    float produto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if (produto <= 50){
        printf("O valor do produto com o reajuste de 5%% fica: %.2f R$", produto + (produto * 0.05));
    }
    else if (produto >= 50 && produto <= 100){
        printf("O valor do produto com o reajuste de 10%% fica: %.2f R$", produto + (produto * 0.10));
    }
    else 
        printf("O valor do produto com o reajuste de 15%% fica: %.2f R$", produto + (produto * 0.15));

    return 0;
}
