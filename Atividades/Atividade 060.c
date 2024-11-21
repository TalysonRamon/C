/*
Leia uma distância em quilômetros e converta para milhas.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float km;

    printf("Digite o valor da distância em km: ");
    scanf("%f", &km);

    //Para converter o valor de km para milhas, basta dividir o valor por 1,60934.
    printf("Convertendo o valor fica: %.2f milhas", km / 1.60934);
    return 0;
}
