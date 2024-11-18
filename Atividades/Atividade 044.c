//Faça um programa que converta uma letra maiúscula em letra minúscula.
//Dica: use a tabela ASCII.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char mai, min;
    printf("Digite uma letra maiúscula: ");
    scanf("%c", &mai);
    min = mai + 32;
    printf("A letra %c minúscula fica: %c", mai, min);
    return 0;
}
