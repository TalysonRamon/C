/*
Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

#include<stdio.h>

int main()
{
    int i, soma = 0;

    // for para atualizar a variavel i.
    // Como a variavel i vai ser atualizada em 2, vai pular os números pares.
    for (i = 1; i < 1000; i += 2)
    {
        soma += i;
    }
    
    printf("A soma dos números impares e: %d", soma);
    return 0;
}
