#include<stdio.h>
/*
                            Lista - Questão 126
Escrever um programa para ajudar vendedores. A partir de um valor total lido, mostrar:
• Ototal a pagar com desconto de 10%;
• Ovalor de cada parcela, no parcelamento de 3x sem juros;
• Acomissão do vendedor que é de 5% do valor com desconto (para vendas a vista)
ou de 5% sobre o valor total (para vendas parceladas).
*/

int main()
{
    float prod;
    int pag;

    printf("Digite o valor do produto: ");
    scanf("%f", &prod);
    printf("1 - valor a vista\n2 - valor a prazo\nDigite a forma de pagamento: ");
    scanf("%d", &pag);

    float valordesc = prod - (prod * 0.1);

    if (pag == 1){
        printf("Valor do produto: %.2f R$\nComissao do verndedor: %.2f R$", valordesc, valordesc * 0.05);
    }
    else
        printf("Valor das parcelas: 3x %.2f R$\nComissao do vendedor: %.2f R$", valordesc / 3, prod * 0.05);
    
    return 0;
}
