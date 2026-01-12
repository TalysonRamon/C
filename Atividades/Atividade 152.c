#include<stdio.h>
/*
                                Lista - Questão 152
Faça um programa que receba a altura e o sexo de uma pessoa, calcule e mostre o seu
peso ideal. Considere que o peso ideal para homens é calculado pela fórmula 72,7h−58
e o peso ideal para mulheres é calculado pela fórmula 62,1h − 44,7, onde h é a altura
fornecida
*/

int main()
{
    float h;
    char sexo;

    printf("Digite sua altura e seu sexo (F, f, M, m): ");
    scanf("%f %c", &h, &sexo);

    switch (sexo)
    {
    case 'M':
        printf("Seu peso ideal e: %.2f kg", 72.7 * h - 58);
        break;
    case 'm':
        printf("Seu peso ideal e: %.2f kg", 72.7 * h - 58);
        break;
    case 'F':
        printf("Seu peso ideal e: %.2f kg", 62.1 * h - 44.7);
        break;
    case 'f':
        printf("Seu peso ideal e: %.2f kg", 62.1 * h - 44.7);
        break;
    default:
        printf("Caracter nao correpondente! Tente novamente!");
        break;
    }
    return 0;
}
