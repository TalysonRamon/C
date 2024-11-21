/*
Ler um comprimento em jardas e converter para metros.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float j;

    printf("Digite o comprimento em jardas: ");
    scanf("%f", &j);

    //Para converter jardas em metros, basta multiplicar o valor por 0,9144.
    printf("Convertendo o valor, obtemos: %.2f m", j * 0.9144);
    return 0;
}