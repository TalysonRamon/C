//Faça um programa que leia quatro notas de um aluno e calcule a sua média obtida.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float n1, n2, n3, n4;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    printf("A média do aluno é: %.2f", (n1 + n2 + n3 + n4) / 4);
    return 0;
}
