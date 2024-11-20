/*
Faça um programa que calcule a média ponderada das notas de três provas. A primeira
e a segunda prova têm peso 1 e a terceira prova tem peso 2. O programa deve imprimir a média
obtida pelo aluno.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float n1, n2, n3;
    float med;
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);

    //Cálculo da média ponderada.
    med = (n1 * 1 + n2 * 1 + n3 * 2) / 1 + 1 + 2;
    
    printf("A média do aluno é: %.2f", med);
    return 0;
}
