#include<stdio.h>
/*
                            Lista - Questão 196
Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 100, 3 vezes.
A primeira vez deve usar a estrutura de repetição for, a segunda while e a terceira
dowhile.
*/

int main()
{
    int i, cont = 0;

    for ( i = 1; i <= 100; i++){
        printf("%d ", i);
    }
    printf("\n");
    do{
        cont++;
        printf("%d ", cont);
    } while (cont < 100);
    
    cont = 0;
    printf("\n");
    while (cont < 100){
        cont++;
        printf("%d ", cont);
    }
    
    return 0;
}
