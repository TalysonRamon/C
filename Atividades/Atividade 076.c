/*
Faça um programa que realize operações simples de números complexos:
• Crie e leia dois números complexos, ambos compostos por parte real e parter
imaginária.
• Apresente a soma, subtração e produto entre estes dois números complexos.
• Apresente o módulo dos dois números complexos.
*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float r1, i1, r2, i2;
    float sub1, sub2;

    printf("Digite a parte real de um número complexo: ");
    scanf("%f", &r1);
    printf("Digite a parte imaginaria do número complexo: ");
    scanf("%f", &i1);
    printf("Digite outra parte real de um número complexo: ");
    scanf("%f", &r2);
    printf("Digite outra parte imaginaria do número complexo: ");
    scanf("%f", &i2);

    nursoma = r1 + r2;
    nuisoma = i1 + i2;

    sub1 = r1 - r2;
    sub2 = i1 - i2;

    printf("A multiplicação entre dois números complexos é: %.2f %2.fi\n", nurmulti, nuimulti)
    printf("A soma entre os dois números complexos é: %.2f %.2fi\n", nursoma, nuisoma);
    printf("A subtração entre os dois números complexos é: %.2f - %.2fi", sub1, sub2);
    return 0;
}