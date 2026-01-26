#include<stdio.h>
/*
                Lista - Questão 235
Faça um programa que calcule e escreva o valor de S:
S = 1/1 + 3/2 + 5/3 + 7/4 +... 99/50
*/

int main()
{
    int i, cont = 0; 
    float soma = 0;

    for ( i = 1; i <= 99; i += 2){
        cont++;
        soma += (float)i / cont;
    }

    printf("%.2f ", soma);
    
    return 0;
}
