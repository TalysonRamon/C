//Faça um programa que leia dois números, some estes números e exiba o resultado.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("A soma dos dois números é: %d", a + b);
    return 0;
}


