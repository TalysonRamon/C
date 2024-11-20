/*
Escreva um programa que leia as coordenadas x e y de um ponto no plano cartesiano
e calcule a sua distância ao ponto de origem.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int x, y;
    float dist;

    printf("Digite a coordenada do ponto x: ");
    scanf("%d", &x);
    printf("Digite a coordenada do ponto y: ");
    scanf("%d", &y);

    //Cálculo da distância (ponto de origem (0,0)).
    dist = sqrt(pow((x - 0), 2) + pow((y - 0), 2));

    printf("A distância entre os pontos é: %.2f", dist);
    return 0;
}
