//Faça um programa para calcular a área de um quadrado.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float l;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &l);
    printf("A área do quadrado é: %.2f", l * l);
    return 0;
}

