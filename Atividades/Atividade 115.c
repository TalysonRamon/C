#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 115
Ler um número real, se o número for positivo imprima sua raiz quadrada, senão imprima
o número ao quadrado.
*/

int main()
{
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    if (x > 0){
        printf("Raiz quadrada de %.2f e: %.2f", x, sqrt(x));
    }
    else
        printf("%.2f ao quadrado e: %.2f", x, pow(x, 2));
    
    return 0;
}
