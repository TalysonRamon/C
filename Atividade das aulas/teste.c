// ** ESTRUTURA DE REPETIÇÂO **

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    printf("Os números ímpares de 1 até 100 são: \n");

    // for para mostras os números ímpares.
    for ( i = 1; i <= 100; i += 2)
    {
        printf("%d ", i);
    }
    
    return 0;
}