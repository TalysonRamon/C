#include<stdio.h>
/*
                                Lista - Questão 218
Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas
pelo usuário. Esse programa não pode permitir a entrada de dados inválidos, ou seja,
medidas menores ou iguais a 0.
*/

int main()
{
    float base, altura;

    do
    {
        printf("\nDigite a base de um triangulo: ");
        scanf("%f", &base);
    } while (base <= 0);

    do
    {
        printf("\nDigite a altura so triangulo: ");
        scanf("%f", &altura);
    } while (altura <= 0);

    printf("Area do triangulo: %.2f", (base * altura) / 2.0);
    
    return 0;
}
