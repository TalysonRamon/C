/*
Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a, b, soma = 0, i;

    printf("Digite dois números inteiros: ");
    scanf("%d%d", &a, &b);

    //O for vai repitir a soma, atraves do número digitado na váriavel b. Ex.: se os números digitados forem 2 e 3, a soma do número dois vai ocorrer 3 vezes, gerando assim o número 6.
    for ( i = 1; i <= b; i++)
    {
        soma += a;
    }

    printf("%d x %d = %d", a, b, soma);
    
    return 0;
}
