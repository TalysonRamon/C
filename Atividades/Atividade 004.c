//Faça um programa que declare uma variável capaz de armazenar um caractere, atribua
//a letra a a essa variável e mostre na tela o conteúdo da variável.
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char a = 'b';
    printf("A letra %c", a);
    return 0;
}
