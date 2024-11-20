/*
Escreva um programa que leia as coordenadas x e y de dois pontos no plano e calcule
a distância entre eles.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int x1, y1, x2, y2;
    float dist;

    printf("Digite a coordenada do ponto x¹: ");
    scanf("%d", &x1);
    printf("Digite a coordenada do ponto y¹: ");
    scanf("%d", &y1);
    printf("Digite a coordenada do ponto x²: ");
    scanf("%d", &x2);
    printf("Digite a coordenada do ponto y²: ");
    scanf("%d", &y2);

    //Cálculo da distância entre dois pontos.
    dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("A distância entre os dois pontos é: %.2f", dist);
    return 0;
}
