#include<stdio.h>
/*
                            Lista - Questão 245
Faça um programa que imprima a tabela ASCII exibindo o caractere, seu código decimal
e seu código hexadecimal
*/

int main()
{
    int i;

    printf("Decimal  |   Hexadecimal  |  Caracter |\n");
    for ( i = 1; i <= 127; i++){
        printf("|  %d     |       %X       |    %c   |\n", i, i, i);
    }
    
    return 0;
}
