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

    printf("\nCALCULADORA: \n");
    //do while para controlar o que o usúario vai digitar.
    do
    {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);
    
    // While para calcular as multiplicaçôes.
    while (i <= 10)
    {
        printf("%d x %d = %d \n", num, i, num * i);
        i++;
    }
    
    return 0;
}
