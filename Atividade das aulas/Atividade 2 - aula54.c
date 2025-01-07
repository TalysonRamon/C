/*
Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, i, neg = 0, pos = 0;
    printf("Digite cinco valores inteiros: \n");
    for ( i = 5; i > 0; i--) // faz a repetição da análise dos 5 números.
    {
        scanf("%d", &a); // scanf sozinho para nâo precisar repetir o printf 5 vezes.

        if (a < 0)
        {
            neg += 1;
        }
        else if (a > 0)
        {
            pos += 1;
        }
        else // else vazio, caso o usuario digite 0;
        {

        }
    }

    // A quantidade de valores positivos e negativos: 
    printf("\nValores positivos: %d", pos);
    printf("\nValores negativos: %d", neg);

    return 0;
}
