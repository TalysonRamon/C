/*
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    a = a + b; // a + b = 20 , a = 15 e b = 5;
    b = a - b; // b = 15 e a = 20;
    a = a - b; // a = 5 e b = 15;

    printf("Trocando os valores de a para b: %d\n", a);
    printf("Trocando os valores de b para a: %d\n", b);
    return 0;
}
