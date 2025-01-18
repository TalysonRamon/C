/*
Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, soma = 0, a = 1;

    //for para contar o número de dias.
    for ( i = 1; i <= 30; i++)
    {
        //duplica todos os valores e guarda a soma na variavel "soma".
        soma += a * 2;
        a++;
    }
    printf("A soma do dinheiro guardado é: %.2f R$", soma / 100.0);
    
    return 0;
}