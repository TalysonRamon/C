#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 154
Faça um programa que leia um número e, caso seja positivo, calcule e mostre o seu
quadrado e sua raiz quadrada.
*/

int main()
{
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0){
        printf("O quadrado de %.2f = %.2f\nA raiz quadrada de %.2f = %.2f", n, n * n, n, sqrt(n));
    }
    
    return 0;
}
