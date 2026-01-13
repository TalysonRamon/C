#include<stdio.h>
/*
                            Lista - Questao 169
Faça um programa que leia um ponto no plano e informe em qual quadrante do plano
cartesiano este ponto é localizado.
*/
int main()
{
    float x, y;

    printf("Digite a coordenada (x, y): ");
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0){
        printf("Primeiro quadrante");
    }
    else if (x < 0 && y > 0){
        printf("Segundo quadrante");
    }
    else if (x < 0 && y < 0){
        printf("Terceiro quadrante");
    }
    else if (x > 0 && y < 0){
        printf("Segundo quadrante");
    }
    
    return 0;
}
