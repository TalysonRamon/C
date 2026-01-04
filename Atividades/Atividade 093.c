#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 093
Ler o valor de um ângulo x, em graus, e calcular o seno hiperbólico de x, o cosseno
hiperbólico de x e a tangente hiperbólica de x. Obs: o valor do ângulo deve ser
convertido para radianos antes de se usar as funções da biblioteca math.h.
*/

int main()
{
    float rad, grau;
    double pi;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &grau);

    pi = acos(-1);
    rad = grau * (pi / 180);

    printf("Seno hiperbolico: %.2f\nCosseno hiperbolica %.2f\nTangente hiperbolica %.2f", sinh(rad), cosh(rad), tanh(rad));

    return 0;
}
