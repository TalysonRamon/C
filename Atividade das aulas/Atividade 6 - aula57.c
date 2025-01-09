/*
Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no
calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês
Inválido’.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portguuese");
    int a;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    // if para cada mês do ano
    if (a == 1)
    {
        printf("mês: Janeiro");
    }
    else if (a == 2)
    {
        printf("mês: Fevereiro");
    }
    else if (a == 3)
    {
        printf("mês: março");
    }
    else if (a == 4)
    {
        printf("mês: abril");
    }
    else if (a == 5)
    {
        printf("mês: Maio");
    }
    else if (a == 6)
    {
        printf("mês: Junho");
    }
    else if (a == 7)
    {
        printf("mês: Julho");
    }
    else if (a == 8)
    {
        printf("mês: Agosto");
    }
    else if (a == 9)
    {
        printf("mês: Setembro");
    }
    else if (a == 10)
    {
        printf("mês: outubro");
    }
    else if (a == 11)
    {
        printf("mês: Novembro");
    }
    else if (a == 12)
    {
        printf("mês: Dezembro");
    }
    // else caso o usuario digite um número diferente dos que estão entre 1 e 12.
    else
    {
        printf("mês invalido!");
    }
        
    return 0;
}
