//Faça um programa que leia um número inteiro, calcule a décima parte deste número e
//exiba o resultado.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b;
    printf("Digite um número: ");
    scanf("%d", &a);
    b = a/10;
    printf("A decima parte de %d é: %d", a, b);
    return 0;
}
