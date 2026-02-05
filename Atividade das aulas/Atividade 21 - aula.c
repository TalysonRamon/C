/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

#include<stdio.h>

int main()
{
    float n1, n2;

    do{
        printf("Digite a nota  da primeira prova (entre 0 e 10): ");
        scanf("%f", &n1);
    } while (n1 < 0 || n1 > 10);

    do{
        printf("Digite a nota da segunda prova (entre 0 e 10): ");
        scanf("%f", &n2);
    } while (n2 < 0 || n2 > 10);
    
    // A média semestral do aluno:
    printf("A media semestral do aluno e: %.2f", (n1 + n2) / 2.0);
    
    return 0;
}
