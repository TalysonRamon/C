/*
23) Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, u = 1;

    for ( i = 0; i < 8; i++)
    {   
        while (u < 8)
        {
            u++;
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
