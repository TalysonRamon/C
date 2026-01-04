#include<stdio.h>
/*
                        Lista - Questão 090
Faça um programa que calcule e mostre a média harmônica entre quatro valores
*/

int main()
{
    float v1, v2, v3, v4;

    printf("Digite quatro valores: ");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

    printf("A media armonica entre os valores e: %.2f", 4 / (1/v1 + 1/v2 + 1/v3 + 1/v4));
    
    return 0;
}
