/*
Três amigos zeram um bolão e jogaram na loteria. Caso eles ganhem, o prêmio deve
ser repartido proporcionalmente ao valor que cada um contribuiu para a realização das
apostas. Faça um programa que lê quanto cada apostador investiu, lê o valor do prêmio
e escreve quanto cada um ganharia.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float i1, i2, i3, p, invest;

    printf("Qual o valor do prêmio? ");
    scanf("%f", &p);
    printf("Quanto o primeiro amigo investiu? ");
    scanf("%f", &i1);
    printf("Quanto o segundo amigo investiu? ");
    scanf("%f", &i2);
    printf("Quanto o terceiro amigo investiu? ");
    scanf("%f", &i3);

    //relacionando o valor do prêmio com o valor investido.
    invest = p / (i1 + i2 + i3);

    //Calculando e mostrando quanto cada amigo recebeu.
    printf("O primeiro amigo recebeu: %.2f\n R$", i1 * invest);
    printf("O segundo amigo recebeu: %.2f\n R$", i2 * invest);
    printf("O terceiro amigo recebeu: %.2f R$", i3 * invest);
    return 0;
}
