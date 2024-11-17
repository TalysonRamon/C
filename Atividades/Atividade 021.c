//Faça um programa que ler uma temperatura em graus Celsius e convertê-la para Kelvin.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float c;
    printf("Digite a temperatura em Celsius: °");
    scanf("%f", &c);
    printf("Convertendo a temperatura para Kelvin: °%.2f K", c + 273.15);   
    return 0;
}
