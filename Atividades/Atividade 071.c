/*
Ler uma área em acres e converter para metros quadrados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a;

    printf("Digite a área em acres: ");
    scanf("%f", &a);

    //Para converter acre em metros quadrados, basta multiplicar o valor por 4046,86.
    printf("Convertendo o valor, obtemos: %.2f m²", a * 4046.86);
    return 0;
}