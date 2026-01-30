#include<stdio.h>
/*
                            Lista - Questão 248
Faça um programa que receba dois números. Calcule e mostre:

• a soma dos números pares desse intervalo de números, incluindo os números digi
tados.
• a multiplicação dos números ímpares desse intervalo, incluindo os digitados.

*/

int main()
{
    int i, n1, n2, soma = 0, mult = 1;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &n1, &n2);

    for ( i = n1; i <= n2; i++){
        if (i % 2 == 0){
            soma += i;
        }
        else
            mult *= i;
    }
    
    printf("Soma dos valores par: %d\n", soma);
    printf("Multiplicacao dos valores impares: %d", mult);
    return 0;
}
