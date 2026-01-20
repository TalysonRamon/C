#include<stdio.h>
/*
                            Lista - Questão 184
Faça um programa que solicite diversos valores ao usuário. Ao final, o programa deve
informar a soma dos valores, sua média aritmética, o menor e o maior valor.
*/

int main()
{
    float soma = 0, maior, menor, x;
    int cont = 1, i;

    printf("Digite um valor: ");
    scanf("%f", &x);

    menor = x;
    maior = x;
    soma += x;

    for ( i = 1; i <= 4; i++){
        printf("Digite um valor: ");
        scanf("%f", &x);

        soma += x;
        cont++;

        if (menor > x){
            menor = x;
        }
        if (maior < x){
            maior = x;
        }
    }

    printf("\nMaior numero: %.2f\nMenor numero: %.2f\n", maior, menor);
    printf("Soma dos valores: %.2f\nMedia aritmetica: %.2f", soma, soma / cont);
    
    return 0;
}
