#include<stdio.h>
/*
                        Lista - Questão 210
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex: a soma dos divisores do número 66 é:
1 +2+3+6+11+22+33=78
*/

int main()
{
    int i, n, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for ( i = 1; i <= n / 2; i++){
        if (n % i == 0){
            soma += i;
        }
    }

    printf("Soma: %d", soma);
    
    return 0;
}
