/*
Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float valordespesa, valorgorjeta, vtotal;
    int npessoas;

    printf("Digite o valor da despesa gasta no restaurante: ");
    scanf("%f", &valordespesa);
    printf("Digite o valor da gorjeta (em porcentagem): ");
    scanf("%f", &valorgorjeta);
    printf("Digite a quantidade de pessoas para dividir a conta: ");
    scanf("%f", &npessoas);

    vtotal = valordespesa + (valordespesa * (valorgorjeta / 100));

    printf("O valor total para cada  pessoa é: %.2f R$", vtotal / npessoas);
    return 0;
}
