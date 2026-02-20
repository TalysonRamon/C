#include<stdio.h>
/*
                        Lista - Questão 265
Numa votação destinada a selecionar um entre 10 candidatos, optou-se pela coleta e
processamento dos votos por computador. Supondo que os candidatos são designados
por seu número de candidato, faça um programa que obedeça as seguintes especificações:
• Os votos são recebidos a partir do teclado, informando o número do candidato que
deverá ser um inteiro de cinco dígitos.
• O número zero é usado para indicar voto em branco.
• Números inválidos (não associados a nenhum candidato) indicam votos nulos.
• O programa deverá exibir a classificação obtida na votação indicando o nome e
número do candidato e sua votação expressa em valor absoluto de votos e em
porcentagem de votos válidos. Também deverá ser informado o total de votantes,
o total de votos válidos, o total de votos brancos e o total de votos nulos.
• O programa deverá indicar se houve um vencedor ou se deverá haver um segundo
turno. Para ser vitorioso, o candidato precisa obter uma quantia superior a 50%
dos votos válidos. Caso seja necessário um segundo turno, mostre quem são os
candidatos que deverão concorrer.
*/

int main()
{
    int votantes, op, i, v[10] = {};

    printf("Qual a quantidade de votantes: ");
    scanf("%d", &votantes);

    for ( i = 1; i <= votantes; i++){
        printf("Digite:\n13134 - Para votar no Ademir\n97873 - Para votar na Maria\n48828 - Para votar no Jorge\n47872 - Para votar no Leo\n");
        printf("98953 - Para votar na Joana\n58959 - Para votar no Jao\n87342 - Para votar no Marcelo\n89472 - Para votar no Wagner\n");
        printf("78634 - Para votar na Larissa\n84972 - Para votar no Lopes\n0 - Para votar em branco\nQualquer outro numero para voto nulo\n");
        printf("Opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 13134:
            v[0]++;
            break;
        case 97873:
            v[1]++;
            break;
        case 48828:
            v[2]++;
            break;
        case 47872:
            v[3]++;
            break;
        case 98953:
            v[4]++;
            break;
        default:
            break;
        }
    }
    
    
    return 0;
}
