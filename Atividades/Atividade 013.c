//Faça um programa que leia um número inteiro, calcule o seu quadrado e exiba o resul-
//tado.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("O quadrado do número é: %d", a * a);
    return 0;
}
