#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 225
Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem
como saída o número de cada dado e a relação entre eles (>,<,=) em cada lançamento
*/

int main()
{
    int n, d1, d2, i;

    srand(time(NULL));

    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){

        d1 = rand();
        d1 = d1 % 7;
        d2 = rand();
        d2 = d2 % 7;

        if (d1 < d2){
            printf("%d < %d\n", d1, d2);
        }
        else if (d1 > d2){
            printf("%d > %d\n", d1, d2);
        }
        else
            printf("%d = %d\n", d1, d2); 
        
    }
    
    return 0;
}
