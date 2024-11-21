/*
Ler uma área em metros quadrados e converter para hectares.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float m2;

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &m2);

    //Para converter metros quadrados em hectar, basta dividir o valor por 10000.
    printf("Convertendo o valor, obtemos: %.2f hectares", m2 / 10000);
    return 0;
}