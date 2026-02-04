/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, i;

    //Para verificar se o número digitado é maior ou igual a 1.
    do
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &a);
    } while (a < 1);
    
    //For que vai de 1 até o número que o usúario digitar.
    for ( i = 1; i <= a; i++)
    {
        //if para verificar se o número é par.
        if (i % 2 == 0)
        {
            printf("O quadrado de %d é: %d\n", i, i * i);
        }
    }
    
    
    return 0;
}
