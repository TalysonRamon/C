//Faça um programa que leia um valor inteiro e mostre este mesmo valor nas bases hexa-
//decimal e octal.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("O número na base hexadecimal é: %x\n", a);
    printf("O número na base octal é: %o\n", a);
    return 0;
}
