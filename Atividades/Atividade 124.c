#include<stdio.h>
/*
                            Lista - Questão 124
Faça um programa que calcule a média ponderada das notas de três provas. A primeira
e a segunda prova têm peso 1 e a terceira prova tem peso 2. O programa deve a média
obtida pelo aluno e exibir o resultado se aprovado ou reprovado. Considere que para a
aprovação seja necessário obtér pelo menos uma média de 60%
*/

int main()
{
    float p1, p2, p3, media, resul;
    printf("Digite as notas das 3 provas: ");
    scanf("%f%f%f", &p1, &p2, &p3);

    media = (((p1 * 1) + (p2 * 1) + (p3 + 2)) / 4.0);

    resul = 10 * 0.6;

    if (media >= resul){
        printf("Aprovado!");
    }
    else
        printf("Reprovado!");
    return 0;
}
