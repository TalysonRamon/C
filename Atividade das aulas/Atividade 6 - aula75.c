/*
Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    for ( i = 7; i < 9999; i += 7)
    {
        printf("%d ", i);
    }
    
    return 0;
}
