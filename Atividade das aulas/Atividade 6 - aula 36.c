/*
Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float real;

    printf("Digite um valor em reais: R$");
    scanf("%f", &real);

    printf("Convertendo o valor para dolar, fica: US$1%.2f", real / 5.30);
    return 0;
}
