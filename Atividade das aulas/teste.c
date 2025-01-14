// ** ESTRUTURA DE REPETIÇÂO **

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    //incremento
    for ( i = 0; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    
    //decremento
    for ( i = 10; i >= 0; i--)
    {
        printf("%d ", i);
    }
    
    return 0;
}