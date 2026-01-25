#include<stdio.h>
/*
                            Lista - Questão 229
Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serão necessárias para atender ao
saque com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20,
10, 5, 2 e 1 real.
*/

int main()
{
    int cem, valor, cinq, vinte, dez, cinco, dois, um;

    printf("Digite a quantidade que deseja sacar: ");
    scanf("%d", &valor);

    cem = valor / 100;
    cinq = (valor % 100) / 50;
    vinte = (valor % 50) / 20;
    dez = (valor % 20) / 10;
    cinco = (valor % 10) / 5;
    dois = (valor % 5) / 2;
    um = (valor % 5) % 2;

    printf("\tNotas:\t\n");
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", cem, cinq, vinte, dez, cinco, dois, um);
    return 0;
}
