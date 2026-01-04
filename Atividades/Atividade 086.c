#include<stdio.h>
/*
                            Lista - Questão 086
Ler um número inteiro e imprimir a soma do sucessor de seu triplo com o antecessor
de seu dobro.
*/

int main()
{
    int num, sucessor, antecessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    sucessor = (3 * num) + 1;
    antecessor = (2 * num) - 1;

    printf("%d + %d = %d", sucessor, antecessor, sucessor + antecessor);
    
    return 0;
}
