/*
Ler uma área em hectares e converter para quilômetros quadrados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float h;

    printf("Digite a área em hectares: ");
    scanf("%f", &h);

    //Para converter hectar em quilômetros quadrados, basta multiplicar o valor por 0,01.
    printf("Convertendo o valor, obtemos: %.2f km²", h * 0.01);
    return 0;
}