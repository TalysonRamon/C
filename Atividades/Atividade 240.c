#include<stdio.h>
/*
                            Lista - Questão 240
Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.
*/

int main()
{
    int cont = 0;
    float chico = 1.5, ze = 1.1;

    do{
        chico += 0.02;
        ze += 0.03;
        cont++;
    } while (ze <= chico);

    printf("Chico: %.2f\nZe: %.2f\n", chico, ze);
    
    printf("Quantidade de anos: %d", cont);
    return 0;
}
