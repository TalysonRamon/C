#include<stdio.h>
/*
                                Lista - Questão 243
Faça um programa que receba dois valores. O primeiro representa uma conta a ser paga
e o segundo com que valor ela foi paga. Mostre como resposta a quantidade mínima de
cada tipo de moeda/nota de troco. Imprima uma mensagem de erro caso o valor pago
seja menor que a conta
*/

int main()
{
    int cem, cinq, vinte, dez, cinco, dois, um;
    int valor, pago, troco;
    do{
        printf("Digite o valor da conta: ");
        scanf("%d", &valor);
        printf("Digite com quanto deseja pagar: ");
        scanf("%d", &pago);

    } while (pago < valor);
    
    troco = pago - valor;

    cem = troco / 100;
    cinq = (troco % 100) / 50;
    vinte = (troco % 50) / 20;
    dez = ((troco % 50) % 20) / 10;
    cinco = (troco % 10) / 5;
    dois = (troco % 5) / 2;
    um = ((troco % 5) % 2) / 1;
    
    
    printf("100 = %d\n50 = %d\n20 = %d\n10 = %d\n5 = %d\n2 = %d\n1 = %d\n", cem, cinq, vinte, dez, cinco, dois, um);

    return 0;
}
