//Faça um programa que leia um número inteiro, positivo e de três dígitos, calcule o
//número formado pelos dígitos invertidos do número lido.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n, inverso = 0;
    int u = 0, d = 0, c = 0;
    printf("Digite um número inteiro positivo e de três digitos: ");
    scanf("%d", &n);
    u = n  % 10;
    d = (n / 10) % 10;
    c = n / 100;
    inverso = u * 100 + d * 10 + c;
    printf("O inverso do número %d é: %d", n, inverso);
    return 0;
}
