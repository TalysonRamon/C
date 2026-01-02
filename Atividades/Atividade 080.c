#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 080
Calcular a força gravitacional de um objeto de massa m a uma distância d acima do
solo
*/

int main()
{
    float massa, distancia, forca;

    printf("Digite a massa (kg) e a distancia (m): ");
    scanf("%f%f", &massa, &distancia);

    const double G = 6.674e-11;
    const double M = 5.9e24;

    forca = M * massa * G / pow(distancia, 2);

    printf("A força gravitacional e: %.2e N", forca);

    return 0;
}
