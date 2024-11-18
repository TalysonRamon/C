//Faça um programa que leia o valor do salário de um funcionário, calcule e mostre seu
//novo salário, sabendo que o mesmo recebeu um aumento de 21,3%.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float s, ns = 0;
    printf("Digite o valor do salário: ");
    scanf("%f", &s);
    ns = s + (s * (21.3/100));
    printf("O salário com aumento ficou: %.2f", ns);
    return 0;
}
