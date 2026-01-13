#include<stdio.h>
#include<math.h>
/*
Lista - Questão 163
Faça um programa que leia três pontos no plano cartesiano e verifique se esses pontos
formam um triângulo equilátero, escaleno, isósceles ou se não formam um triângulo
*/

int main()
{   
    float x1, y1, x2, y2, x3, y3, delta;
    float AB, BC, AC;

    printf("Digite o primiero ponto cartesiano (x, y): ");
    scanf("%f%f", &x1, &y1);
    
    printf("Digite o segundo ponto cartesiano (x, y): ");
    scanf("%f%f", &x2, &y2);

    printf("Digite o terceiro ponto cartesiano (x, y): ");
    scanf("%f%f", &x3, &y3);

    delta = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    AC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (delta == 0){
        printf("Os pontos nao formam um triangulo!\n");
    }
    else{
        if (AB == AC && AC == BC){
            printf("Triangulo equilatero!");
        }
        else if (AB == AC || AB == BC || BC == AC){
            printf("Triangulo isosceles!");
        }
        else
            printf("Triangulo escaleno!");
    }
    return 0;
}
