/*
Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

#include<stdio.h>

int main()
{
    int i, soma = 1, a = 1;

    //for para contar o número de dias.
    for ( i = 1; i < 30; i++)
    {
        //duplica todos os valores e guarda a soma na variavel "a".
        soma *= 2; // 1 - 2 - 4 - 8
        a += soma;
    }
    printf("A soma do dinheiro guardado e: %.2f R$", a / 100.0);
    
    return 0;
}