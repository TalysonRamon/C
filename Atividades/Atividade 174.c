#include<stdio.h>
/*
                            Lista - Questão 174
. Leia um inteiro entre 0 e 50 e veri que em que dezena este número pertence. Faça este
programa usando a estrutura switch-case.
Dica: o valor avaliado em uma estrutura switch-case deve ser um inteiro ou um carac
tere, estando armazenado em uma variável ou sendo resultado de uma expressão.
*/

int main()
{
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (x > 0 && x <= 50){

        y = x / 10;

        switch (y)
        {
        case 0:
            printf("Unidades");
            break;
        case 1:
            printf("Uma dezena");
            break;
        case 2:
            printf("Duas dezena");
            break;
        case 3:
            printf("Tres dezena");
            break;
        case 4:
            printf("Quatro dezena");
            break;
        case 5:
            printf("Cinco dezena");
            break;
            printf("Numero nao correspondente");
        default:
            
            break;
        }
    }
    else
        printf("Numero nao corresponde ao intervalo");
    
    return 0;
}
