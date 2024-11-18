//Faça um program que leia três valores e apresente, como resultado nal, a soma dos
//quadrados dos três valores lidos.

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;
    double s = 0.0;
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);
    s = pow(a, 2) + pow(b, 2) + pow(c, 2);
    printf("A soma dos quadrados é: %.2lf", s);
    return 0;
}
