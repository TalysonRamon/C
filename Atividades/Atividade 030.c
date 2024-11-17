//Faça um programa para calcular a área de um retângulo. O tamanho dos lados devem
//ser informados pelo usuário.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b;
    printf("Digite a altura do retângulo: ");
    scanf("%f", &a);
    printf("Digite o valor base do retângulo: ");
    scanf("%f", &b);
    printf("A área do retângulo é: %.2f", a * b);
    return 0;
}
