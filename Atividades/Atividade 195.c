#include<stdio.h>
/*
                Lista - Questão 195
Faça um programa que receba vários números, calcule e mostre:
• A soma dos números digitados.
• A quantidade de números digitados.
• A média dos números digitados.
• O maior número digitado.
• O menor número digitado.
• A média dos números pares.
*/

int main()
{
    int soma = 0, maior = 0, menor = 0, par = 0;
    int cont = 0, contpar = 0, n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    soma += n;
    maior = n;
    menor = n;
    cont++;
     if (menor > n){
         menor = n;
    }
    if (maior < n){
        maior = n;
    }
    if (n % 2 == 0){
        par += n;
        contpar++;
    }

    while (n < 0 || n > 0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
        cont++;
        if (menor > n){
            menor = n;
        }
        if (maior < n){
            maior = n;
        }
        if (n % 2 == 0){
            par += n;
            contpar++;
        }
        
    }
    
    printf("Soma: %d\nQuantidade de numeros digitados: %d\nMedia: %.2f\n", soma, cont, (float)soma / cont);
    printf("Maior numero: %d\nMenor numero: %d\nMedia par: %.2f", maior, menor, (float)par / contpar);

    return 0;
}
