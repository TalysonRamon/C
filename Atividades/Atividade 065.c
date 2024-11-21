/*
Ler um valor de quantidade de litros e calcular o valor correspondente em centímetros
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

    //Para converter litros em centímetros cúbicos, basta dividir o valor por 0,001.
    printf("Convertendo o valor, obtemos: %.2f centímetros cúbicos", l / 0.001);   
    return 0;
}