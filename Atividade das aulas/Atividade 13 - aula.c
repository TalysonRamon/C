/*
Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char a;

    printf("Digite um caracter: ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'A':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'e':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'E':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'i':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'I':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'o':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'O':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'u':
        printf("O caracter digitado é uma vogal! ");
        break;
    case 'U':
        printf("O caracter digitado é uma vogal! ");
        break;
    
    default:
        printf("O caracter digitado não é uma vogal!");
        break;
    }
    return 0;
}