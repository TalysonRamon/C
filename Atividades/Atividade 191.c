#include<stdio.h>
/*
                                Lista - Questão 191
Faça um programa que determine e mostre os 50 primeiros múltiplos de 3, considerando
números positivos.
*/

int main()
{
    int i;

    for ( i = 3; i <= 50; i += 3){
        printf("%d ", i);
    }
    
    return 0;
}
