/*
Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e cresce 3
centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int chico = 150, ze = 110, anos = 0;
    //multipliquei todos os números por 10, para facilitar as operações;
    //o loop só vai continuar enquanto chico for maior ou igual a ze.
    do
    {
        chico += 2;
        ze += 3;
        anos += 1;
    } while (chico >= ze);

    printf("Anos necessarios: %d", anos);
    return 0;
}
