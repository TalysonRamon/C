#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 101
Faça um programa que calcule a n-ésima raiz de um valor x fornecido pelo usuário.
Obs.: o usuário deve fornecer o índice da raíz.
Dica: use a função pow da biblioteca math.h
*/

int main()
{
    float x;
    int ind;

    printf("Digite um valor: ");
    scanf("%f", &x);
    printf("Digite o indice da raiz: ");
    scanf("%d", &ind);

    printf("O valor da raiz e: %.2f", pow(x, 1.0/ind));
    
    return 0;
}
