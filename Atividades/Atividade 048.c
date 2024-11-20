/*
Faça um programa que leia o valor da hora de trabalho (em reais), o número de dias
trabalhados no mês de janeiro deste ano, e mostre na tela o valor a ser pago ao funci-
onário, adicionando 10% sobre o valor calculado. Considere que a carga de trabalho é
de segunda a sexta-feira, das 08:00 às 12:00 e as 14:00 às 18:00; aos sábados, das 08:00
às 12:00. Considere que o funcionário teve folga em dias de feriados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float vt, ht, totalvalor;
    int d, s, valor;
    printf("Digite o valor da hora trabalhada: (em reais)");
    scanf("%f", &vh);
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &d);
    printf("Quantos sábados foram trabalhados no mês de janeiro? ");
    scanf("%d", &s);
    
    //horas trabalhadas (o sábado é 4 horas a menos que os outros dias).
    ht = d * 8 - s * 4;

    //valor sem o aumento
    valor = ht * vh;

    //valor final (com os 10% de aumento).
    totalvalor = valor + (valor * 10/100);

    printf("Valor a ser pago ao funcionário: %.2f", totalvalor);
    return 0;
}
