/*
 Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, i = 1;

    printf("Digite um número entre 1 e 10: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10)
    {
        while (i <= 10)
        {
            printf("%d x %d = %d \n", num, i, num * i);
            i++;
        }
    }
    else
    {
        printf("Número incorreto! ");
    }
    
    return 0;
}
