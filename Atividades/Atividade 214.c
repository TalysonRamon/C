#include<stdio.h>
/*
                            Lista - Questão 214
Em Matemática, o número harmônico designado por Hn define-se como sendo o enésimo
termo da série harmónica. Ou seja:
Hn =1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Apresente um programa que calcule o valor de qualquer Hn para um n fornecido pelo
usuário.
*/

int main()
{
    int n, i;
    float div = 0;

    do
    {
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    for ( i = 1; i <= n; i++){
        div += 1.0/i;
    }

    printf("Numero Harmonico: %.2f", div);
    
    return 0;
}
