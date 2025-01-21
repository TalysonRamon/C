/*
Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int cont = 1, i, soma = 0;

    do
    {
        for ( i = 1; i <= 10; i++)
        {
            if (cont % i == 0)
            {
                soma =+ 1;
            }
            
        }
        if (soma != 10)
        {
           soma = 0;
        }
        
        cont++;
    } while (soma != 10);

    printf("\n%d", cont);
    
    return 0;
}
