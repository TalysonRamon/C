#include<stdio.h>
/*
                        Lista - Questão 233
Faça um programa que conte quantos números primos existem entre a e b.
*/

int main()
{
    int a, b, j, cont = 0, i;

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
        }
        cont = 0;
    }
    
    return 0;
}
