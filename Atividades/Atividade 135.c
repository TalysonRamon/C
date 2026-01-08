#include<stdio.h>
/*
Um programador iniciante resolveu fazer um programa que receba um número inteiro
de 1 a 7 correspondendo a um dia da semana (1=domingo, 2=segunda-feira, etc). O
programa deve mostrar no nome do dia da semana. O programador decidiu usar uma
estrutura de seleção (switch-case) porém, ele esqueceu de incluir os comandos break ao
nal de cada case. Qual será o comportamento deste programa?
*/

int main()
{
    int dia;

    printf("Digite um numero:\n1 - Domingo\n2 - Segunda\n3 - Terca\n4- Quarta\n5 - Quinta\n6 - Sexta\n7 - Sabado\n Dia escolhido: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo\n");
    case 2:
        printf("Segunda\n");
    case 3:
        printf("Terca\n");
    case 4:
        printf("Quarta\n");
    case 5:
        printf("Quinta\n");
    case 6: 
        printf("Sexta\n");
    case 7:
        printf("Domingo\n");
    default:
        printf("Erro");
    }

    //Vai exibir todos os casepartir do numero digitado pelo usuario, pois o break serve para parar a exucuçao no break correto;
    return 0;
}
