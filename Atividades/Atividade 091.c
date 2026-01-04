#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 091
Ler um ângulo x em graus, calcular e mostrar o valor de seno(x), cossseno(x) e
tangente(x).
Obs.: antes de usar as funções trignométricas da biblioteca math.h, é necessário con
verter a medida do ângulo para radianos
*/

int main()
{
    float graus, rad;
    double pi;

    printf("Digite um angulo em graus: ");
    scanf("%f", &graus);

    pi = acos(-1);
    rad = graus * (pi / 180);

    printf("Valor do seno e: %.2f\nO valor do cosseno e: %.2f\nO valor da tangente e: %.2f", sin(rad), cos(rad), tan(rad));

    return 0;
}
