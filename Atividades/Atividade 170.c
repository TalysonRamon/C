#include<stdio.h>
/*
                            Lista - Questão 170
Faça um programa que leia dois pontos no plano e informe se os mesmos estão locali
zados ou não num mesmo quadrante do plano cartesiano
*/

int main()
{
    float x, y, x1, y1;

    printf("Digite a primeira coordenada: ");
    scanf("%f%f", &x, &y);
    printf("Digite a segunda coordenada: ");
    scanf("%f%f", &x1, &y1);

    if (x > 0 && y > 0 && x1 > 0 && y1 > 0){
        printf("Os dois pertencem ao primeiro quadrante!");
    }
    else if (x < 0 && y > 0 && x1 < 0 && y1 > 0){
        printf("Os dois pertencem ao segundo quadrante!");
    }
    else if (x < 0 && y < 0 && x1 < 0 && y1 < 0){
        printf("Os dois pertencem ao terceiro quadrante!");
    }
    else if (x > 0 && y < 0 && x1 > 0 && y1 < 0){
        printf("Os dois pertencem ao quarto quadrante!");
    }
    else
        printf("Nao pertencem ao mesmo quadrante!");
    
    return 0;
}
