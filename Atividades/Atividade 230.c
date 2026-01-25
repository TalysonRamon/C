#include<stdio.h>
/*
                    Lista - Questão 230
Escreva um programa para calcular o valor da série, para 7 termos:
S =0+1/2!+2/4!+3/6!+...
*/

int main()
{
   int j, k, mult, cont = 1, t = 1;
   float soma = 0;
    for ( j = 2; j <= 12; j += 2){
        for (k = j; k >= 1; k--){
            mult = t * k;
            t = mult;
        }
        soma += (float)cont / mult;
        
        cont++;
        t = 1;
    }
    
    printf("Valor da serie: %.2f", soma);
    return 0;
}
