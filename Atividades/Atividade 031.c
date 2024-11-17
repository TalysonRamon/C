//Faça um programa para calcular a área de um triângulo retângulo.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b;
    printf("Digite a altura do triangulo retângulo: ");
    scanf("%f", &a);
    printf("Digite o tamanho da base do triangulo retângulo: ");
    scanf("%f", &b);
    printf("A área do triangulo retângulo é: %.2f", (a * b) / 2);
    return 0;
}
