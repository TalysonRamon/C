#include<stdio.h>
/*
                            Lista - Questão 241
Em uma eleição presidencial existem quatro candidatos. Os votos são informados atra
vés de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos.
• 5 =voto nulo.
• 6 =voto em branco.
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
• total de votos para cada candidato.
• a porcentagem de votos válidos obtidos por cada candidato.
• total de votos válidos.
• total de votos nulos.
• total de votos em branco
Como finalizador do conjunto de votos, tem-se o valor 0. Considere como votos válidos
todos os votos diferentes de branco ou nulo
*/

int main()
{
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, votn = 0, branco = 0, total, op;

    do
    {
        printf("Digite:\n1 - Para votar no candidato 1\n2 - Para candidato 2\n3 - Candidato 3\n4 - Candidato 4\n5 - Para votar nulo\n6 - Votar em branco\n0 - Sair\nOpcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            v1++;
            break;
        case 2:
            v2++;
            break;
        case 3:
            v3++;
            break;
        case 4:
            v4++;
            break;
        case 5:
            votn++;
            break;
        case 6:
            branco++;
            break;
        case 0:
            printf("Encerrando votacao...\n");
            break;
        default:
            printf("Codigo incorreto! Digite novamente!\n");
            break;
        }
    } while (op != 0);

    total = v1 + v2 + v3 + v4;

    printf("Total de votos para cada candidato:\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\n", v1, v2, v3, v4);
    printf("Porcentagem de votos validos:\nCandidato 1: %.2f%%\nCandidato 2: %.2f%%\nCandidato 3: %.2f%%\nCandodato 4: %.2f%%\n", ((float)v1 / total) * 100, ((float)v2 / total) * 100, ((float)v3 / total) * 100, ((float)v4 / total) * 100);
    printf("Total de votos validos: %d\n", total);
    printf("Total votos nulos: %d\n", votn);
    printf("Total de votos em branco: %d", branco);
    return 0;
}