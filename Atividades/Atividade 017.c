//Faça um programa que leia dois números inteiros e calcule sua soma, subtração, mul-
//tiplicação e divisão.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a, b;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite outro número inteiro: ");
    scanf("%d", &b);
    printf("A soma entre os números é: %d\n", a + b);
    printf("A subtração entre os números é: %d\n", a - b);
    printf("A multiplicação entre os números é: %d\n", a * b);
    printf("A divisão inteira entre os números é: %d", a / b);
    return 0;
}
