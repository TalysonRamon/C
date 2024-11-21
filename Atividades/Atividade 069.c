/*
Ler um comprimento em metros e converter para jardas.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float m;

    printf("Digite o comprimento em metros: ");
    scanf("%f", &m);

    //Para converter metros em jardas, basta dividir o valor por 0,9144.
    printf("Convertendo o valor, obtemos: %.2f jardas", m / 0.9144);
    return 0;
}