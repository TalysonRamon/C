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
        cont++;
        // for para repitir os números que vão dividir.
        for ( i = 1; i <= 10; i++)
        {
            // se a divisão for inteira, a variavel soma recebe + 1;
            if (cont % i == 0)
            {
                soma++;
            } 
            
        }
        
        //Caso o número não tenha 10 divisões inteiras, a variavel soma vai receber 0 e o teste vai começar novamente com outro número, até que o resultado de soma seja igual a 10.

        if (soma != 10)
        {
            soma = 0;
        }
        
    } while (soma != 10);

    printf("\nO menor número divisivel por todos os números de 1 a 10 é: %d", cont);
    
    return 0;
}
