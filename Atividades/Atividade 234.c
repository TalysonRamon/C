#include<stdio.h>
/*
                        Lista - Questão 234
Faça um programa que some os números primos existentes entre a e b.
*/

int main()
{
    int a, b, j, cont = 0, i, soma = 0;

    do
    {
        printf("Digite dois numeros inteiros (o primeiro menor que o segundo): ");
        scanf("%d%d", &a, &b);

    } while (a > b);

    for ( i = a; i <= b; i++){
        for ( j = 1; j <= i; j++){
            if (i % j == 0){
                cont ++;
            }
        }
        if (cont == 2){
            printf("%d ", i);
            soma += i;
        }
        cont = 0;
    }
    
    printf("\nSoma: %d", soma);
    
    return 0;
}
