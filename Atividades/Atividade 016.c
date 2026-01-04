//Faça um programa capaz de multiplicar dois números fornecidos pelo usuário.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite outro número: ");
    scanf("%d", &b);
    printf("A multiplicação entre os dois números é: %d", a * b);
    return 0;
}
