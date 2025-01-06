/*
Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c; // Váriavel para os três valores.
    float menor, maior;

    printf("Digite três valores: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a >= b && a >= c) // Primeiro if para identificar qual é o maior.
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
    if (a <= b && a <= c) //Segundo if para identifacar qual é o menor.
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

    // Segunda versão do código:

    menor = a;
    maior = a;

    // Compara a váriavel "menor" com b e c.
    if (menor > b)
    {
        menor = b;
    }
    if (menor > c)
    {
        menor = c;
    }

    // Compara a váriavel "maior" com b e c.
    if (maior < b)
    {
        maior = b;
    }
    if (maior < c)
    {
        maior = c;
    }

    printf("\nSegunda versão do código: ");
    printf("\nO menor valor é: %.2f\nO maior valor é: %.2f", menor, maior);
    return 0;

}