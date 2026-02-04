/*
21) Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 1 vez.
********************
********************
********************
********************
********************
********************
********************
********************
********************
********************
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;

    //utilizei o 'for' para seguir as instroções de utilizar o printf no maxímo duas vezes e o '\n' 1 vez.
    for ( i = 0; i < 10; i++)
    {
        printf("********************\n");
    }
    
    return 0;
}
