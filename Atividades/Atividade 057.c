/*
Leia um valor de velocidade em quilômetros por hora e apresentá-la em metros por
segundo.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float kmh;

    printf("Digite um velocidade em km/h: ");
    scanf("%f", &kmh);

    //Para converter km/h para m/s é so dividir por 3,6.
    printf("A velocidade em m/s é: %.2f", kmh / 3.6);
    return 0;
}
