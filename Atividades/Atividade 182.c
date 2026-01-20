#include<stdio.h>
/*
                            Lista - Questão 182
Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve
informar o menor valor lido.
*/

int main()
{
    float x, menor = 0;
    int i;

    printf("Digite um valor: ");
    scanf("%f", &x);

    menor = x;

    for ( i = 1; i <= 4; i++){
        printf("Digite um valor: ");
        scanf("%f", &x);

        if (menor > x){
            menor = x;
        }
    }

    printf("\nMenor valor lido: %.2f", menor);
    
    return 0;
}
