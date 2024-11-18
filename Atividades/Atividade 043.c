//Faça um programa que leia um caractere e imprima esse caractere como se fosse um
//número inteiro. Que número é esse que foi exibido pelo programa?

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char l;
    printf("Digite uma letra: ");
    scanf("%c", &l);
    printf("A letra %c em ASC é: %d", l, l);
    return 0;
}
