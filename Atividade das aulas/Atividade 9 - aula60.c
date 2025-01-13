/*
Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char a;
    float n1, n2, n3;

    printf("\"a\" - média aritmetica\n\"b\" - média ponderada\n");
    printf("Digite a letra refernte a média a ser realizada: ");
    scanf(" %c", &a);

    switch (a)
    {
    case 'a':
        printf("\nMédia aritmetica: ");
        printf("\nDigite as três notas: ");
        scanf("%f%f%f", &n1, &n2, &n3);

        printf("\nA média aritmetica das notas é: %.2f", (n1 + n2 + n3)/ 3);
        break;
    case 'p':
        printf("\nMédia ponderada: \n");
        printf("Digite as três notas: ");
        scanf("%f%f%f", &n1, &n2, &n3);

        printf("\nA média ponderada das notas é: %.2f", (n1 * 3 + n2 * 3 + n3 * 4) / 10);
        break;
    default:
        printf("Caracter invalido!");
        break;
    }
    return 0;
}
