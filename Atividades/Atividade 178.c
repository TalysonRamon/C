#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 178
 Faça um programa que gere e exiba numeros aleatorios entre 0 (zero) e 15. O programa
deve gerar números até que o número 0 (zero) seja sorteado. Faça três versões desse
programa, cada uma usando uma estrutura de repetição diferente (for, while, do-while).
Qual das três estruturas é a mais adequada para este programa? Por que?
*/

int main()
{
    int x, i;

    srand(time(NULL));

    for ( i = 0; i < 1;){
        x = rand();
        x = x % 16;
        printf("%d ", x);
        if (x == 0){
            i++;
        }
    }

    printf("\nSegunda versao:\n");

    do{

       x = rand();
       x = x % 16;
       printf("%d ", x);

    } while (x < 0 || x > 0);
    
    printf("\nTerceira versao:\n");

    x = rand();
    x = x % 16;

    while (x < 0 || x > 0){
        x = rand();
        x = x % 16;
        printf("%d ", x);
    }
    
    return 0;
}
