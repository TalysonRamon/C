/*
Ler um valor de quantidade de litros e calcular o valor correspondente em metros
cúbicos.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float l;

    printf("Digite o volume em litros: ");
    scanf("%f", &l);

    //Para converter litros em metros cúbicos, basta dividir o valor por 1000,0.
    printf("Convertendo o valor, obtemos: %.2f metros cúbicos", l / 1000.0);   
    return 0;
}