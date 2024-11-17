//Faça um programa que converta uma temperatura em Kelvin para Celsius.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float k;
    printf("Digite a temperatura em Kelvin: °");
    scanf("%f", &k);
    printf("convertendo a temperatura para Celsius: °%.2f C", k - 273.15);
    return 0;
}
