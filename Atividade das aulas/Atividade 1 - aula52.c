/*
Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c; // Váriavel para os três valores.

    printf("Digite três valores: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("O maior número é: %.2f", a);
    }
    else if (b >= a && b >= c)
    {
        printf("O maior número é: %.2f", b);
    }
    else
    {
        printf("O maior número é: %.2f", c);
    }
    if (a <= b && a <= c)
    {
        printf("\nO menor número é: %.2f", a);
    }
    else if (b <= a && b <= c)
    {
        printf("\nO menor número é: %.2f", b);
    }
    else
    {
        printf("\nO menor número é: %.2f", c);
    }
    return 0;
}
