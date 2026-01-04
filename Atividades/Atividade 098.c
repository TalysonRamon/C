#include<stdio.h>
#include<math.h>
/*
                                Lista - Questão 098
Ler um valor de x e calcular seu logaritmo na base e e na base 10. Que valor é obtido
se o usuário fornecer o valor zero para x? Qual o significado desse número?
*/

int main()
{
    float x;
    double l;

    printf("Digite um numero: ");
    scanf("%f", &x);

    l = log10(x);

    printf("Valor obtido: %.2lf", l);

    //Ao fornecer o valor zero o programa gera um erro, pois o numero tende a menos infinito;

    return 0;
}
