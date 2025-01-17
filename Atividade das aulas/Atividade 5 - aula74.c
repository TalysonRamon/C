/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2;

    // do while analisar se o usúario digitou a nota no intervalo correto.
    do
    {
        printf("Digite as notas das provas (entre 0 e 10): ");
        scanf("%f%f", &n1, &n2);
    } while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10);

    // A média semestral do aluno:
    printf("A média semestral do aluno é: %.2f", (n1 + n2) / 2.0);
    
    return 0;
}
