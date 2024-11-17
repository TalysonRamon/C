// Faça um programa para ler um ângulo em radianos e convertê-lo em graus.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float rad;
    printf("Digite o valor do ângulo em radianos: °");
    scanf("%f", &rad);
    printf("Convertendo o valor para graus: °%.2f g", (rad * 180) / 3.14);
    return 0;
}
