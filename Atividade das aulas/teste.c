// ** ESTRUTURA DE REPETIÇÂO "While" **

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a = 1;

    // while para mostrar os números impares de 1 até 100.
    while (a <= 100)
    {
        printf("%d ", a);
        a += 2;
    }
    
    return 0;
}