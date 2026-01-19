/*
Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, soma = 0;

    // for para atualizar a variavel i.
    for (i = 1; i < 1000; i++)
    {
        // if para analisar se o número é par ou ímpar.
        if (i % 2 != 0)
        {
            //soma todos os números ímpares.
            soma += i;
        }
        
    }
    
    printf("A soma dos números ímpares é: %d", soma);
    return 0;
}
