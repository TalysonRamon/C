#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 179
Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero) e
15. O programa deve gerar os números até que o número 15 seja sorteado. O programa
deve exibir também, ao nal, a quantidade de números gerados.
*/

int main()
{
    int x, cont = 0;

    srand(time(NULL));

    do{
        x = rand();
        x = x % 16;
        printf("%d ", x);
        cont++;
    } while (x < 15 || x > 15);

    printf("\nQuantidade de numeros gerados: %d", cont);

    return 0;
}
