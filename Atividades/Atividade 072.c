/*
Ler uma área em hectares e converter para metros quadrados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float h;

    printf("Digite a área em hectares: ");
    scanf("%f", &h);

    //Para converter hectares em metros quadrados, basta multiplicar o valor por 10000.
    printf("Convertendo o valor, obtemos: %.2f m²", h * 10000);
    return 0;
}