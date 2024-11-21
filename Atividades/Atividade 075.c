/*
Ler uma área em quilômetros quadrados e converter para hectares.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float km2;

    printf("Digite a área em quilômetros quadrados: ");
    scanf("%f", &km2);

    //Para converter quilômetros quadrados em hectares, basta dividir o valor por 0,01.
    printf("Convertendo o valor, obtemos: %.2f hectares", km2 / 0.01);
    return 0;
}