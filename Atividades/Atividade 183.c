#include<stdio.h>
/*
 Lista - Questão 183
Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve
informar o maior valor lido.
*/

int main()
{
    float x, maior = 0;
    int i;

    printf("Digite um valor: ");
    scanf("%f", &x);

    maior = x;

    for ( i = 1; i <= 4; i++){
        printf("Digite um valor: ");
        scanf("%f", &x);

        if (maior < x){
            maior = x;
        }
    }

    printf("\nMaior valor lido: %.2f", maior);
    
    return 0;
}