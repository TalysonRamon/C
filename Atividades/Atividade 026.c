//Faça um programa para ler um ângulo em graus e convertê-lo em radianos.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float g;
    printf("Digite o valor em graus: °");
    scanf("%f", &g);
    printf("Convertendo o valor para radianos: %.2f rad", (g * 3.14) / 180);
    return 0;
}
