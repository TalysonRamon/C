/*
Converter de centímetros para polegadas.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float cm;

    printf("Digite o comprimento em cm: ");
    scanf("%f", &cm);

    //Para converter cemtimetros em polegadas, basta dividir o valor por 2,54.
    printf("Convertendo o valor, obtemos: %.2f polegadas", cm / 2.54);   
    return 0;
}
