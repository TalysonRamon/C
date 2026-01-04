#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 096
Faça um programa que gere três valores aleatórios inteiros e menores ou iguais que um
limite superior fornecido pelo usuário.
*/

int main()
{
    int limite, i;

    srand(time(NULL));
    printf("Digite o limite: ");
    scanf("%d", &limite);

    for ( i = 0; i < 3;)
    {
        int x = rand();
        if (x <= limite)
        {
            i++;
            printf("%d <= %d\t", x, limite);
        }

    }
    
    return 0;
}