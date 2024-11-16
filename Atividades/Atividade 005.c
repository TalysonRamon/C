//Faça um programa que declare uma variável inteira, atribua a essa variável o valor 2.97
//e mostre na tela o conteúdo da variável.
#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n = 2.97;
    printf("O valor é: %d", n);
    return 0;
}
