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

    printf("\"a\" - média aritmetica\n\"b\" - média ponderada\n");
    printf("Digite a letra refernte a média a ser realizada: ");
    scanf(" %c", &a);

    switch (a)
    {
    case 'a':
        printf("\nMédia aritmetica: ");
        
        break;
    
    default:
        break;
    }
    return 0;
}
