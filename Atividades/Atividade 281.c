#include<stdio.h>
/*
                            Lista - Questão 281
Usando o comando while, escreva um programa que substitui as ocorrências do caractere
0 (zero) em uma string pelo caractere 1.
*/

int main()
{
    int i = 0, j;
    char v[101];

    printf("Digite qualquer numero: ");
    scanf("%100[^\n]", v);

    printf("\nNumero sem modificacao: \n");
    for ( j = 0; v[j] != '\0'; j++){
        printf("%c", v[j]);
    }
    

    printf("\n\nNumero modificado: \n");
    if (v[i] == '0'){
        v[i] = '1';
    }
    printf("%c", v[i]);
    while (v[i] != '\0'){
        i++;
        if (v[i] == '0'){
            v[i] = '1';
        }
        printf("%c", v[i]);
    }
    
    return 0;
}
