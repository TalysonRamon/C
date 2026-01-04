#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 089.c
Faça um programa que calcule e mostre a média geométrica entre quatro valores.
*/

int main()
{
    float v1, v2, v3, v4, mult;

    printf("Digite quatro valores: ");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

    mult = v1 * v2 * v3 * v4;

    printf("A media geometrica entre esses numeros e: %.2f", pow(mult, 1/4.0));
    return 0;
}
