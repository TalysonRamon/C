//Faça um programa para ler uma temperatura em graus Celsius e mostrar seu valor
//convertido para graus Fahrenheit.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float c;
    printf("Digite a temperatura em Celsius: °");
    scanf("%f", &c);
    printf("A temperatura em fahrenheit é: °%.2f", c * 1.8 + 32);
    return 0;
}
