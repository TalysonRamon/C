#include<stdio.h>
/*
                            Lista - Questão 249
Faça um programa que declare um vetor com capacidade para 10 elementos do tipo
inteiro. O programa deve exibir o conteúdo do vetor. Como foram obtidos os valores
que são exibidos pelo programa?
*/

int main()
{
    int v[10], i;

    for ( i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    //Valores aleatorios que ja estavam na memoria do vetor v;
    return 0;
}
