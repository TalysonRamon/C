#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 100
Faça um programa capaz de ler um valor real x e decompor esse número em parte
inteira e parte fracionária.
Dica: use a função modf da biblioteca math.h.
*/

int main()
{
    double x, ptint, fra;

    printf("Digite um numero: ");
    scanf("%lf", &x);

    fra = modf(x, &ptint);

    printf("Numero: %.2f\nParte inetira: %.0f\nParte fracionaria: %.2f", x, ptint, fra);
    return 0;
}
