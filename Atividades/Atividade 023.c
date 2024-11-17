//Faça um programa para converter de graus Fahrenheit para Kelvin.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float f;
    printf("Digite a temperatura em fahrenheit: °");
    scanf("%f", &f);
    printf("Convertendo para Kelvin: °%.2f K", (f - 32) / 1.8 + 273.15);
    return 0;
}
