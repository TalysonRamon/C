#include<stdio.h>
/*
                            Lista - Questão 280
Usando o comando for, faça um algoritmo que conte o número de 1's que aparecem em
uma string contendo o valor binário.
Exemplo: 0011001 ⇒ 3.
*/

int main()
{
    int i, cont = 0;
    char v[101];
    
    printf("Digite os numeros binarios: ");
    scanf("%100[^\n]", v);

    for ( i = 0; v[i] != '\0'; i++){
        if (v[i] == '1'){
            cont++;
        }
    }
    printf("\nQuantidade de 1's: %d", cont);    
    return 0;
}