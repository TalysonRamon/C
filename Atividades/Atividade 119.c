#include<stdio.h>
/*
                            Lista - Questão 119
A nota final de um estudante é calculada a partir de três notas atribuídas, respectiva
mente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final.
A média das três notas mencionadas anteriormente os seguintes pesos: Trabalho de
laboratório: 2; Avaliação semestral: 3; Exame nal: 5. Calcule a média obtida pelo
aluno e, de acordo com o resultado, mostre se o aluno está reprovado (média entre 0 e
2,9), de recuperação (média entre 3 e 4,9) ou aprovado (média maior ou igual a 5).
*/

int main()
{
    float tra, ava, exa, media;
    printf("Digite as tres notas atribuidas respectivamente (trabalho, avaliacao e exame): ");
    scanf("%f%f%f", &tra, &ava, &exa);
    
    media = ((tra * 2) + (ava * 3) + (exa * 5)) / 10;

    if (media >= 5){
        printf("Aprovado!");
    }
    else if (media >= 3 && media <= 4.9){
        printf("Recuperacao!");
    }
    else{
        printf("Reprovado!");
    }
    
    return 0;
}
