//Faça um programa para converter de Kelvin para graus Fahrenheit.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float k;
    printf("Digite a temperatura em Kelvin: °");
    scanf("%f", &k);
    printf("Convertendo a temperatura para Fahrenheit: °%.2f F", k * 1.8 - 459.67);
    return 0;
}
