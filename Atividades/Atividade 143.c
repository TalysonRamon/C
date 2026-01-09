#include<stdio.h>
/*
Lista - Questão 143
Escrever um programa que leia o código de um produto escolhido do cardápio de uma
lanchonete e a quantidade. Assim, o programa deve calcular o valor a ser pago por
aquele lanche. Considere que a cada execução somente um pedido será realizado. O
cardápio da lanchonete é exibido na tabela 3.7.
*/

int main()
{
    int codigo, cond = 2, i = 0;
    float valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0, valor6 = 0, valor7 = 0;
    int quant1 = 0, quant2 = 0, quant3 = 0, quant4 = 0, quant5 = 0, quant6 = 0, quant7 = 0;

    printf("\n\t\tCARDAPIO LANCHONETE:\n");
    printf("Descricao:\t\tCodigo:\t\tPreco:\n");
    printf("Cachorro quente\t\t100\t\t1,20 R$\nBauro simples\t\t101\t\t1,30 R$\nBauro com ovo\t\t102\t\t1,50 R$\n");
    printf("Hamburguer\t\t103\t\t1,20 R$\nCheeseburguer\t\t104\t\t1,70 R$\nSuco\t\t\t105\t\t2,20 R$\nRefrigerante\t\t106\t\t1,00 R$");
    do{
        
        if (cond == 1){
            i++;
            printf("Valor da conta: %.2f R$", valor1 + valor2 + valor3 + valor4 + valor5 + valor6 + valor7);
        }
        else{
            printf("\nDigite o codigo do produto que deseja consumir: ");
            scanf("%d", &codigo);
            switch (codigo){
            case 100:
                printf("Digite a quantidade de cachorros quentes: ");
                scanf("%d", &quant1);
                valor1 = quant1 * 1.20;
                break;
            case 101:
                printf("Digite a quantidade de Bauro simples: ");
                scanf("%d", &quant2);
                valor2 = quant2 * 1.30;
                break;
            case 102:
                printf("Digite a quantidade de Bauro com ovo: ");
                scanf("%d", &quant3);
                valor3 = quant3 * 1.50;
                break;
            case 103:
                printf("Digite a quantidade de Hamburguer: ");
                scanf("%d", &quant4);
                valor4 = quant4 * 1.20;
                break;
            case 104:
                printf("Digite a quantidade de Cheeseburguer: ");
                scanf("%d", &quant5);
                valor5 = quant5 * 1.70;
                break;
            case 105:
                printf("Digite a quantidade de suco: ");
                scanf("%d", &quant6);
                valor6 = quant6 * 2.20;
                break;
            case 106:
                printf("Digite a quantidade de Refrigerante: ");
                scanf("%d", &quant7);
                valor7 = quant7 * 1.0;
                break;
            default:
                printf("Codigo errado! Tente novamente!");
                break;
            }
            printf("\nDigite\n1 - para encerrar pedido\n2 - continuar\n");
            scanf("%d", &cond); 
        }

    }while (i <= 0);
    
    return 0;
}
