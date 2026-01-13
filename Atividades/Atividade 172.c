#include<stdio.h>
/*
                        Lista - Questão 172
Faça um programa que leia um caractere e diga a que classe esse caractere pertence.
Considere as seguintes classes: dígito (caracteres de `0' a `9'); letras maiúsculas (carac
teres de `A' a `Z'); letras minúsculas (caracteres de `a' a `z') e; outros (quaisquer outros
caracteres).
Dica: veri que os códigos ASCII para cada classe de caracteres
*/

int main()
{
    char x;
    int ascii;

    printf("Digite um caracter: ");
    scanf(" %c", &x);

    ascii = (int)x;

    if (ascii >= 48 && ascii <= 57){
        printf("Digito");
    }
    else if (ascii >= 65 && ascii <= 90){
        printf("letras maiusculas");
    }
    else if (ascii >= 97 && ascii <= 122){
        printf("letras minusculas");
    }
    else
        printf("Quaisquer outros caracteres");
    
    return 0;
}
