#include<stdio.h>
/*
                    Lista - Questão 198
Faça um programa que leia um número positivo e mostre seus divisores.
*/

int main()
{
    int num, i;

    do{
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("Divisores: ");
    for ( i = num; i >= 1; i--){
        if (num % i == 0){
            printf("%d ", i);
        }
    }    
    return 0;
}
