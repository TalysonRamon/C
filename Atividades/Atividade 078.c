#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 079
Crie um programa que converte coordenadas cartesianas em coordenadas polares. O
programa deve ler um ponto em um coordenada polar, composto por raio e ângulo em
radianos.
*/
int main()
{
    float x, y, raio, angulo;
    printf("Digite a coordenada: ");
    scanf("%f%f", &x, &y);

    raio = sqrt(pow(x, 2) + pow(y, 2));
    angulo = atan2(y, x);

    printf("Coordenada polar: (%.2f, %.2f)", raio, angulo);

    return 0;
}
