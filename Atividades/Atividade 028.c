//Faça um programa que leia um número e exiba o seu antecessor e sucessor.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, suc = 0, ant = 0;
    printf("Digite um número: ");
    scanf("%d", &a);
    suc = a + 1;
    ant = a -1;
    printf("O sucessor de %d é: %d\n", a, suc);
    printf("O antecessor de %d é: %d", a, ant);
    return 0;
}
