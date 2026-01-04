#include<stdio.h>
/*
                                        Lista - Questão 083
Ler o saláriobase de um funcionário, calcular e mostrar o salário a receber, sabendo-se
que esse funcionário tem gratificação de 5% sobre o salário-base, e paga imposto de 7%
sobre o salário-base.
*/

int main()
{
    float sal, grat;

    printf("Digite seu salario: ");
    scanf("%f", &sal);

    grat = sal * (5/100.0);

    printf("Salario recebido: %.2f R$", sal - (sal * 7/100.0) + grat);

    return 0;
}
