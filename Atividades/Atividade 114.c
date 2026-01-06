#include<stdio.h>
/*
                        Lista - Questão 114
Faça um programa que receba dois números e mostre qual é o maior deles
*/

int main()
{
    float n1, n2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &n1, &n2);

    if (n1 > n2){
        printf("Maior: %.2f\nMenor: %.2f\n", n1, n2);
    }
    else
        printf("Maior: %.2f\nMenor: %.2f\n", n2, n1);
    
    return 0;
}
