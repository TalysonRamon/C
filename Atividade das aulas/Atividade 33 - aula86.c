/*
Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, pos = 0, neg = 0;

    //do vai ficar repetindo até que o usuario digite 0;
    do
    {
        printf("Digite um número: ");
        scanf("%d", &a);
        //if para analisar se o número digitado é positivo ou negativo;
        if (a > 0)
        {
           pos++; 
        }
        else if (a < 0)
        {
            neg++;
        }
        
        
    } while (a != 0);

    printf("Quntidade de negativos: %d\n", neg);
    printf("Quantidade de positivos: %d", pos);
    
    return 0;
}
