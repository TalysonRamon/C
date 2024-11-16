//Faça um programa que declare uma variável real com precisão dupla, atribua a essa
//variável a expressão 123/456.
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    double a;
    a = 123.0/456.0;
    printf("O valor é: %lf", a);
    return 0;
}
