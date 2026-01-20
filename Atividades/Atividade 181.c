#include<stdio.h>
/*
Lista - Questão 181
Faça um programa que permita ao usuário fornecer diversos valores reais. O programadeve, primeiramente, solicitar ao 
usuário a quantidade de valores a serem entrados. Ao final, o programa deve informar a média aritmética dos valores lidos
*/

int main()
{
    int i, n, cont = 0;
    float x, soma = 0;

    printf("Digite a quantidade de valores que vai digitar: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        printf("Digite um valor real: ");
        scanf("%f", &x);
        soma += x;
        cont++;
    }

    printf("\nA media aritmetica e: %.2f", soma / cont);
    
    return 0;
}
