//Faça um programa que declare uma variável real com precisão simples, atribua a essa
//variável o valor do número π (3.1415) e mostre, para o usuário, o conteúdo dessa
//variável.
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a = 3.1415;
    printf ("O valor da variável é: %f", a);
    return 0;
}
