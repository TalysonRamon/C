#include<stdio.h>
/*
                            Lista - Questão 116
Verificar se um determinado ano, fornecido pelo usuário, é bissexto. Um ano é bissexto
se for divisível por 400 ou se for divisível por 4 e não for divisível por 100.
Exemplos: 1988, 1992, 1996, 2000. Repare que 1900 não é bissexto
*/

int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        printf("O ano e bissexto!\n");
    }
    else
        printf("O ano nao e bissexto!");
    return 0;
}
