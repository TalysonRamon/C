#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 081
 Um determinado satélite está a uma altitude h com relação a Terra. Escreva um
programa que leia a altitude desse satélite e determine sua velocidade orbital e seu
período de movimento orbital.
Dica: utilize as fórmulas e constantes localizadas no Apêndice A
*/
int main()
{
    float r, T;

    printf("Digite a altitude do satelite: ");
    scanf("%f", &r);

    const double G = 6.674e-11;
    const double M = 5.9e24;

    printf("A velocidade orbital do satelite e: %.2e m/s\n", sqrt((G * M) / r ));

    T = 2 * 3.1415 * sqrt(pow(r, 3) / (G * M));

    printf("O periodo de movimento orbital e: %2e seg\n", T);

    return 0;
}
