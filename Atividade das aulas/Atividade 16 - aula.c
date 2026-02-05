/*
Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float a, b, c;

    printf("Digite três valores: \n");
    scanf("%f%f%f", &a, &b, &c);

    if (a < (b + c) && b < (a + c) && c < (a + b))
    {
        printf("Podem ser os comprimentos de um triângulo.\n\n");
        if (a == b && c == b)
        {
            printf("O triangulo é equilátero! ");
        }
        else if (a != b && b != c && c != a)
        {
            printf("O triângulo é escaleno! ");
        }
        else
        {
            printf("O triângulo é isoceles! ");
        }
    }
    else
    {
        printf("Os comprimentos digitados não formam um triângulo! ");
    }
    return 0;
}
