#include<stdio.h>
/*
                    Lista - Questão 166
Implemente o programa anterior usando switch-case.
Dica: transforme os dois números correspondentes a dia e mes num único valor.
*/

int main()
{
    int dia, mes, op;

    printf("Digite uma data (dd/mm): ");
    scanf("%d%d", &dia, &mes);

    op = ((dia * 100) + mes);

    switch (op)
    {
    case 101:
        printf("confraternizacao universal");
        break;
    case 2104:
        printf("Tiradentes");
        break;
    case 105:
        printf("Dia do trabalho");
        break;
    case 709:
        printf("independencia do Brasil");
        break;
    case 1210:
        printf("Nossa Senhora Aparecida, padroeira do Brasil");
        break;
    case 211:
        printf("Finados");
        break;
    case 1511:
        printf("proclamação da republica");
        break;
    case 2512:
        printf("Natal");
        break;
    default:
        printf("Esta data nao e feriado");
        break;
    }
    return 0;
}
