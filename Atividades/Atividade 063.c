/*
Ler um valor de volume em metros cúbicos e converter para litros.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float m3;

    printf("Digite o volume em metros cúbicos: ");
    scanf("%f", &m3);

    //Para converter metros cúbicos em litros, basta multiplicar o valor por 1000.
    printf("Convertendo o valor, obtemos: %.2f litros", m3 * 1000);   
    return 0;
}
