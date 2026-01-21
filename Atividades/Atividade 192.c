#include<stdio.h>
/*
                        Lista - Questão 192
Faça um programa que leia um número N e depois imprima os N primeiros números
naturais ímpares.   
*/

int main()
{
    int i, imp = 1, n;

    do{
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);

    for ( i = 1; i <= n; i++){
        printf("%d ", imp);
        imp += 2;
    }

    return 0;
}
