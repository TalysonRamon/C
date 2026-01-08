#include<stdio.h>
/*
                            Lista - Questão 131
Uma determinada empresa vende seus produtos em quatro diferentes estados. Cada
estado possui uma taxação de imposto diferente sobre o produto (MG: 7%; SP: 12%;
RJ: 15%; MS: 8%). Faça um programa em que o usuário entre com o valor e o estado
destino do produto e o programa retorne o preço nal do produto acrescido do imposto
correspondente ao estado onde será vendido. O programa deve mostrar uma mensagem
de erro caso o estado fornecido não esteja na lista de estados válidos
*/

int main()
{
    int dest;
    float produto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    printf("Digite o destino:\n1 - MG\n2 - SP\n3 - RJ\n4 - MS\nSeu destino e: ");
    scanf("%d", &dest);

    switch (dest)
    {
    case 1:
        printf("Destino MG:\n");
        printf("Preco do produto com imposto: %.2f", produto + produto * 0.07);
        break;
    case 2:
        printf("Destino SP:\n");
        printf("Preco do produto com imposto: %.2f", produto + produto * 0.12);
        break;
    case 3: 
        printf("Destino RJ:\n");
        printf("Preco do produto com imposto: %.2f", produto + produto * 0.15);
        break;
    case 4:
        printf("Destino MS:\n");
        printf("Preco do produto com imposto: %.2f", produto + produto * 0.08);
        break;
    default:
        printf("Erro! Destino invalido!");
        break;
    }
    return 0;
}