//Faça um programa que leia uma temperatura em graus Celsius e mostre seu valor em
//graus Fahrenheit e Kelvin.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float c;
    printf("Digite a temperatura em Celsius: °");
    scanf("%f", &c);
    printf("Convertendo a temperatura para Fahrenheit: °%.2f F\n", c * 1.8 + 32);
    printf("Convertendo a temperatura para Kelvin; °%.2f K", c + 273.15);
    return 0;
}
