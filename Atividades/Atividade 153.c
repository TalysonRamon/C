#include<stdio.h>
/*
                        Lista - Questão 153
Faça um programa que receba dois valores e mostre o maior. Caos os números sejam
iguais, imprima a mensagem Números iguais.
*/

int main()
{
    float a, b;

    printf("Digite dois numeros: ");
    scanf("%f%f", &a, &b);

    if (a > b){
        printf("%.2f > %.2f", a, b);
    }
    else if (b > a){
        printf("%.2f > %.2f", b, a);
    }
    else
        printf("Numeros iguais! %.2f = %.2f", a, b);
    
    return 0;
}
