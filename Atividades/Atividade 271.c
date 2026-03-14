#include<stdio.h>
/*
                        Lista - Questão 271
Leia um texto de até 140 caracteres e converta o texto para letras maiúsculas.
Obs: faça este programa sem usar as funções da biblioteca string.h.
*/

int main()
{
    int i;
    char v[142];

    printf("Digite um texto de no maximo 140 caracteres: ");
    scanf("%141[^\n]", v);

    printf("\n");
    for ( i = 0; v[i] != '\0'; i++){
        if ((int)v[i] != 32 && (int)v[i] >= 97 && (int)v[i] <= 122){
            printf("%c", v[i] - 32);
        }
        else
            printf("%c", v[i]);
    }
    printf("\n");
    
    return 0;
}
