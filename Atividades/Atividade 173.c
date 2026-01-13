#include<stdio.h>
/*
                    Lista - Questão 173
Faça um programa que leia um caracte e veri que se o mesmo é maiúsculo ou minúsculo.
Se maiúsculo, converta para minúsculo. Se minúsculo, converta para maiúsculo
*/

int main()
{
    char letra;
    int ascii;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    ascii = (int)letra;

    if (ascii >= 65 && ascii <= 90){
        printf("Convertendo: %c", ascii + 32);
    }
    else if (ascii >= 97 && ascii <= 122){
        printf("Convertendo: %c", ascii - 32);
    }
    else
        printf("O caracter digitado nao e uma letra");

    return 0;
}
