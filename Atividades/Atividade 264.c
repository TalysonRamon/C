#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 264
Faça um programa que leia 20 valores inteiros correspondente a idade de uma turma
de alunos. Armazene esses dados em um vetor. Calcule a média e o desvio padrão dos
valores do vetor. Mostre também a maior e a menor idade armazenada no vetor.
*/

int main()
{
    float media = 0, dp = 0;
    int v[20], i, soma = 0, cont = 1, menor, maior;

    for ( i = 0; i < 20; i++){
        printf("Digite a idade do aluno %d: ", cont++);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    
    media = soma / 20.0;

    maior = v[0];
    menor = v[0];
    for ( i = 0; i < 20; i++){
        dp += pow(v[i] - media, 2);
        if (menor > v[i]){
            menor = v[i];
        }
        if (maior < v[i]){
            maior = v[i];
        }
    }
    
    printf("\nMedia: %.2f\nDesvio padrao: %.2f\nMaior: %d\nMenor: %d", media, sqrt(dp / 20.0), maior, menor);
    return 0;
}