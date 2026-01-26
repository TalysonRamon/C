#include<stdio.h>
/*
                            Lista - Questão 232
Escreva um algoritmo que leia um número inteiro e imprima, por extenso, cada um dos
algarismos que compõem o número.
*/

int main()
{
    int cmil, dmil, mil, cent, dez, u, n;

    do{
        printf("Digite um numero inteiro entre [0, 999999]: ");
        scanf("%d", &n);
    } while (n > 999999 || n < 0);

    cmil = n / 100000;
    dmil = (n % 100000) / 10000;
    mil = (n % 10000) / 1000;
    cent = (n % 1000) / 100;
    dez = (n % 100) / 10;
    u = n % 10;

    if (cmil == 0){
        printf("Zero ");
    }
    else if (cmil == 1){
        printf("Um ");
    }
    else if (cmil == 2){
        printf("Dois ");
    }
    else if (cmil == 3){
        printf("Tres ");
    }
    else if (cmil == 4){
        printf("Quatro ");
    }
    else if (cmil == 5){
        printf("Cinco ");
    }
    else if (cmil == 6){
        printf("Seis ");
    }
    else if (cmil == 7){
        printf("Sete ");
    }
    else if (cmil == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");

    
    if (dmil == 0){
        printf("Zero ");
    }
    else if (dmil == 1){
        printf("Um ");
    }
    else if (dmil == 2){
        printf("Dois ");
    }
    else if (dmil == 3){
        printf("Tres ");
    }
    else if (dmil == 4){
        printf("Quatro ");
    }
    else if (dmil == 5){
        printf("Cinco ");
    }
    else if (dmil == 6){
        printf("Seis ");
    }
    else if (dmil == 7){
        printf("Sete ");
    }
    else if (dmil == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");
    

    if (mil == 0){
        printf("Zero ");
    }
    else if (mil == 1){
        printf("Um ");
    }
    else if (mil == 2){
        printf("Dois ");
    }
    else if (mil == 3){
        printf("Tres ");
    }
    else if (mil == 4){
        printf("Quatro ");
    }
    else if (mil == 5){
        printf("Cinco ");
    }
    else if (mil == 6){
        printf("Seis ");
    }
    else if (mil == 7){
        printf("Sete ");
    }
    else if (mil == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");


    if (cent == 0){
        printf("Zero ");
    }
    else if (cent == 1){
        printf("Um ");
    }
    else if (cent == 2){
        printf("Dois ");
    }
    else if (cent == 3){
        printf("Tres ");
    }
    else if (cent == 4){
        printf("Quatro ");
    }
    else if (cent == 5){
        printf("Cinco ");
    }
    else if (cent == 6){
        printf("Seis ");
    }
    else if (cent == 7){
        printf("Sete ");
    }
    else if (cent == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");


    if (dez == 0){
        printf("Zero ");
    }
    else if (dez == 1){
        printf("Um ");
    }
    else if (dez == 2){
        printf("Dois ");
    }
    else if (dez == 3){
        printf("Tres ");
    }
    else if (dez == 4){
        printf("Quatro ");
    }
    else if (dez == 5){
        printf("Cinco ");
    }
    else if (dez == 6){
        printf("Seis ");
    }
    else if (dez == 7){
        printf("Sete ");
    }
    else if (dez == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");
    
    
    if (u == 0){
        printf("Zero ");
    }
    else if (u == 1){
        printf("Um ");
    }
    else if (u == 2){
        printf("Dois ");
    }
    else if (u == 3){
        printf("Tres ");
    }
    else if (u == 4){
        printf("Quatro ");
    }
    else if (u == 5){
        printf("Cinco ");
    }
    else if (u == 6){
        printf("Seis ");
    }
    else if (u == 7){
        printf("Sete ");
    }
    else if (u == 8){
        printf("Oito ");
    }
    else 
        printf("Nove ");
    return 0;
}
