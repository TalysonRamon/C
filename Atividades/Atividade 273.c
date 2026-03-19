#include<stdio.h>
/*
                            Lista - Questão 273
Leia um texto de até 140 caracteres e converta a primeira letra de cada palavra para
maiúscula.
*/

int main()
{
    int i;
    char v[140];

    printf("Digite um texto de ate 140 caracteres: ");
    scanf("%141[^\n]", v);

    if ((int)v[0] >= 97 && (int)v[0] <= 122){
        printf("%c", v[0] - 32);
    }
    else 
        printf("%c", v[0]);
    for ( i = 0; v[i] != '\0'; i++){
        if ((int)v[i] == 32 && ((int)v[i + 1] >= 97 && (int)v[i + 1] <= 122)){
            printf(" ");
            printf("%c", v[i + 1] - 32);
        }
        else{ 
            printf("%c", v[i + 1]);
        }
    }
    printf("\n");

    return 0;
}