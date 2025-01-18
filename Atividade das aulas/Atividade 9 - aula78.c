/*
Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a = 0, n, i;    

    //do while para testar se o número é maior do que 0.
    do
    {
        printf("Digite um número inteiro maior do que zero: ");
        scanf("%d", &n);
    } while (n < 1);

    //for para somar todos os números de 1 até n.
    for ( i = 1; i <= n; i++)
    {
        a += i;
    }
    printf("O valor da soma de 1 até %d é: %d", n, a);

    return 0;
}
