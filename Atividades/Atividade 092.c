#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 092
Ler um valor x e calcular o arcoseno(x), arcocosseno(x), e o arcotangente(x). Os
ângulos obtidos nos resultados devem ser apresentados em graus.
*/

int main()
{

    float valor;
    double pi;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    pi = acos(-1);

    printf("Arcoseno %.2f°\nArcocosseno: %.2f°\nArcotangente: %.2f°", asin(valor) * 180 / pi, acos(valor) * 180 / pi, atan(valor) * 180 / pi);
    return 0;
}
