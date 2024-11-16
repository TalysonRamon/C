//Faça um programa capaz de ler um carectere, informado pelo usuário, e mostrar o
//caractere escolhido pelo usuário.

#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    char a;
    printf("Digite uma letra: ");
    scanf("%c", &a);
    printf("A letra digitada foi: %c", a);
    return 0;
}
