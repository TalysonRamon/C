#include<stdio.h>
/*
                            Lista - Questão 176
Faça um programa que mostre na tela os números naturais entre 0 (zero) e 100. Faça
três versões desse programa, cada uma usando uma estrutura de repetição diferente
(for, while, do-while). Qual das três estruturas é a mais adequada para este programa?
Por que?
*/

int main()
{
    int i, d = 0, c = 0;

    for ( i = 0; i <= 100; i++){
        printf("%d ", i);
    }

    printf("\nSegunda versao:\n");

    do{
        printf("%d ", d++);
    } while (d <= 100);

    printf("\nTerceira versao:\n");

    while (c <= 100){
        printf("%d ", c++);
    }
    
    return 0;
}
