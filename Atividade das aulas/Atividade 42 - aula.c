#include<stdio.h>
/*
                                Aula - Questão 42
Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
programa deve ser encerrado.
*/

int main()
{
    float n1, n2;
    int op;

    do{
        printf("Digite as notas da primeira e segunda avaliacao: ");
        scanf("%f%f", &n1, &n2);
        while (n1 < 0 || n1 > 10){
            printf("A primeira nota nao e valida! Digite Novamente [0,10]: ");
            scanf("%f", &n1);
        }
        while (n2 < 0 || n2 > 10){
            printf("A segunda nota nao e valida! Digite Novamente [0, 10]: ");
            scanf("%f", &n2);
        }
        printf("A media das notas e: %.2f\n", (n1 + n2) / 2);
        printf("Novo Calculo? (1 - sim 2 - nao): ");
        scanf("%d", &op);
        
    } while (op == 1);
    
    return 0;
}
