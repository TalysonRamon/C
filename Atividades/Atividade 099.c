#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 099
Ler um valor de a e um valor de b e calcular o logaritmo de a na base b. Dica: use
a fórmula de mudança de base logarítmica para poder usar as funções da biblioteca
math.h
*/

int main()
{
    double a, b;

    printf("Digite o valor da base do log: ");
    scanf("%lf", &b);
    printf("Valor do logaritmo: ");
    scanf("%lf", &a);

    printf("Valor do log: %.2f", log(a)/log(b));

    return 0;
}
