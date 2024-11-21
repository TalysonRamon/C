/*
Ler uma área em metros quadrados e converter para acres.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float m2;

    printf("Digite a área em metros quadrados: ");
    scanf("%f", &m2);

    //Para converter metros quadrados em acres, basta dividir o valor por 4046,86.
    printf("Convertendo o valor, obtemos: %.2f acres", m2 / 4046.86);
    return 0;
}