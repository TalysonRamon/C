#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 080
Calcular a força gravitacional de um objeto de massa m a uma distância d acima do
solo
*/

int main()
{
    float massa, distancia, forca, forca1;

    printf("Digite a massa (kg) e a distancia (m): ");
    scanf("%f%f", &massa, &distancia);

    forca = pow(66.7, -11) * (pow(59.72, 24) * massa);

    forca1 = pow(6.371, 2) + pow(distancia, 2);

    if ((forca / forca1) > 100000){
        printf("A força gravitacional e: %.2f x 10^5", (forca / forca1) / 100000);
    }
    else{
        printf("A força gravitacional e: %.2f", forca / forca1);
    }

    return 0;
}
