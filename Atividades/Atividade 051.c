/*
Escreva um programa que leia as coordenadas x e y dos vértices de um triângulo e
calcule a sua área.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x1, x2, x3, y1, y2, y3;
    float a;

    printf("Digite as coordenadas de x1 e y1 dos vértices de um triângulo: ");
    scanf("%d%d", &x1, &y1);
    printf("Digite as coordenadas de x2 e y2 dos vértices de um triângulo: ");
    scanf("%d%d", &x2, &y2);
    printf("Digite as coordenadas de x3 e y3 dos vértices de um triângulo: ");
    scanf("%d%d", &x3, &y3);

    //Cálculo da área do triângulo utilizando as coordenadas dos pontos x1, y1 ... x3, y3.
    a = 1.0/2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("A área do triângulo é: %.2f", a);
    return 0;
}
