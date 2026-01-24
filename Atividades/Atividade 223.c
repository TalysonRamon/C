#include<stdio.h>
/*
                        Lista - Questão 223
Dados o número n de alunos de uma turma de Métodos e Técnicas de Programação
e suas notas na primeira prova, determinar a maior e a menor nota obtidas por essa
turma (nota máxima = 100 e nota mínima = 0)
*/

int main()
{
    int aluno, nota, menor, maior, i;

    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &aluno);

    printf("Digite a nota do aluno numero 1: ");
    scanf("%d", &nota);

    menor = nota;
    maior = nota;

    for ( i = 2; i <= aluno; i++){
        printf("Digite a nota do aluno numero %d: ", i);
        scanf("%d", &nota);
        if (menor > nota){
            menor = nota;
        }
        if (maior < nota){
            maior = nota;
        }
    }
    
    printf("Maior: %d\nMenor: %d", maior, menor);

    return 0;
}
