#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 102
Ler um número real x e decompor ele o decompor em número significante e em um
expoente binário de modo que a seja verdadeira a equação x = significante∗2expoente.
Dica: use a função frexp da biblioteca math.h
*/

int main()
{
    float x;
    double significante;
    int exp;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    significante = frexp(x, &exp);

    printf("Parte significante: %f\nExpoente: %d\n", significante, exp);
    printf("Calculo para voltar ao numero original: %.2f", significante * pow(2, exp));

    return 0;
}
