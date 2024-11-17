//Faça um programa para calcular a soma de três valores informados pelo usuário.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("Digite mais um número: ");
    scanf("%d", &c);
    printf("A soma entre os números é: %d", a + b + c);
    return 0;
}
