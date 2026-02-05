/*
                            Aula - Questão 1
 Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada.
*/

#include<stdio.h>

int main()
{
    int num, i = 1;

    printf("\nTabuada: \n");
    //do while para controlar o que o usúario vai digitar.
    do
    {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);
    
    // for para calcular as multiplicaçôes.
    for ( i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
