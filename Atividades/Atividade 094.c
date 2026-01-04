#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                Lista - Questão 094
Faça um programa que gere três valores aleatórios inteiros.
Dica: use as funções rand e srand, ambas de nidas na biblioteca stdlib.h
*/

int main()
{
    int i;

    srand(time(NULL));

    for ( i = 0; i < 3; i++)
    {
        int x = rand();
        printf("\n%d\n", x);
    }
    
    return 0;
}
