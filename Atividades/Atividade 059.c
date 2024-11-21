/*
Leia uma distância em milhas e converta para quilômetros.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float milhas;

    printf("Digite a distância em milhas: ");
    scanf("%f", &milhas);

    //Para converter milhas em km, basta multiplicar o valor por 1,60934.
    printf("Convertendo a distância fica: %.2f km", milhas * 1.60934);
    return 0;
}
