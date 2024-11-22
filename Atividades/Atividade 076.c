/*
Faça um programa que realize operações simples de números complexos:
• Crie e leia dois números complexos, ambos compostos por parte real e parter
imaginária.
• Apresente a soma, subtração e produto entre estes dois números complexos.
• Apresente o módulo dos dois números complexos.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int u, r;

    printf("Digite um número complexo: ");
    scanf("%d", &u);
    printf("");
    scanf("", &r);
    printf("O número complexo é: %d", u);
    return 0;
}
