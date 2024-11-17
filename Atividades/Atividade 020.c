//Faça um programa para ler uma temperatura em graus Fahrenheit e apresentar seu
//valor convertido para graus Celsius.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float f;
    printf("Digite a temperatura em fahrenheit: °");
    scanf("%f", &f);
    printf("A conversão da temperatura para celsius é: °%.2f", (f - 32) / 1.8);
    return 0;
}
