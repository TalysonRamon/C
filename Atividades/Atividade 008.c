//Faça um programa que leia um número inteiro e um número real de precisão simples.
//Mostre na tela ambos os valores.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;
    float b;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);
    printf("Digite um número: ");
    scanf("%f", &b);
    printf("Os números digitados são: %d e %.2f",a , b);
    return 0;
}
