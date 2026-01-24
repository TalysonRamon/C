#include<stdio.h>
/*
                            Lista - Questão 222
O funcionário chamado Carlos tem um colega chamado João que recebe um salário que
equivale a um terço do seu salário. Carlos que gosta de fazer aplicações na caderneta
de poupança vai aplicar seu salário integralmente nela, pois está rendendo 2% ao mês,
e João aplicará seu salário integralmente no fundo de renda xa, que está rendendo 5%
ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses
necessários para que o valor pertencente a João iguale ou ultrapasse o valor pertencente
a Carlos. Teste com outros valores para as taxas
*/

int main()
{
    int cont = 0;
    float salario, joao;

    printf("Digite o salario de Carlos: ");
    scanf("%f", &salario);
    joao = salario / 3;
    do
    {
        joao += joao * 0.05;
        salario += salario * 0.02;
        cont++;
    } while (joao < salario);

    printf("Meses necessarios: %d", cont);
    
    return 0;
}
