//Faça um programa para calcular a área de um triângulo qualquer.

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float a, b, c, p = 0, A = 0;
    printf("Digite o comprimento do primeiro lado do triângulo: ");
    scanf("%f", &a);
    printf("Digite o comprimento do segundo lado do triângulo: ");
    scanf("%f", &b);
    printf("Digite o comprimento do terceiro lado do triângulo: ");
    scanf("%f", &c);
    p = (a + b + c) / 2;
    A = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("A área do triângulo é: %.2f", A);
    return 0;
}
