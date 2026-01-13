#include<stdio.h>
/*
                            Lista - Questão 171
Faça um programa que leia um caractere e diga se o mesmo corresponde a um dígito
de 0 a 9
*/

int main()
{
    char x;
    int ascii;
    printf("Digite um caracter: ");
    scanf(" %c", &x);

    ascii = (int)x;
    if (ascii >= 48 && ascii <= 57){
        printf("Corresponde a um digito de 0 a 9");
    }
    else
        printf("Nao corresponde a um digito de 0 a 9");
    
    return 0;
}
