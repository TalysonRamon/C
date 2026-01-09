#include<stdio.h>
/*
                        Lista - Questão 138
Um certo produto irá sofrer aumento de acordo com a tabela 3.4. Faça um programa
que leia o valor atual, calcule e escreva o novo valor do produto. O programa também
deve mostrar uma mensagem de acordo com a tabela 3.5.
*/

int main()
{
    float produto, valor = 0;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    if (produto <= 50){
        valor = produto + (produto * 0.05);
        printf("O valor do produto com o reajuste de 5%% fica: %.2f R$\n", valor);
    }
    else if (produto >= 50 && produto <= 100){
        valor = produto + (produto * 0.10);
        printf("O valor do produto com o reajuste de 10%% fica: %.2f R$\n", valor);
    }
    else {
        valor = produto + (produto * 0.15);
        printf("O valor do produto com o reajuste de 15%% fica: %.2f R$\n", valor);
    }

    if (valor <= 80){
        printf("Barato!");
    }
    else if (valor > 80 && valor <= 120){
        printf("Normal!");
    }
    else if (valor > 120 && valor <= 200){
        printf("Caro!");
    }
    else
        printf("Muito caro!");
      
    return 0;
}
