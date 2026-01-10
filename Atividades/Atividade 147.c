#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - questão 147
Crie um programa que elabore questões para uma prova de matemática para crianças
que estão aprendendo a somar números inteiros menores que 100. Escolha números
aleatórios entre 1 e 100, e mostre na tela a sequinte pergunta: Qual é a soma entre A
e B?, onde A e B são os valores gerados. Peça a resposta. Faça cinco perguntas ao
aluno, e mostre para ele as perguntas realizadas, as respostas corretas e as respostas
fornecidas. Mostre também quantos acertos e erros o aluno teve e a nota alcançado na
prova (média aritmética considerando que cada questão vale dois pontos).
*/

int main()
{
    unsigned int x, y, soma, i, resp = 0, errado = 0;

    srand(time(NULL));

    printf("Responda as questoes a seguir: \n");

    for ( i = 1; i <= 5;)
    {
        x = rand();
        y = rand();

        x = x % 100;
        y = y % 100;
        if ((x >= 1 && x <= 100) && (y >= 1 && y <= 100))
        {
            printf("Qual a soma entre %d + %d = ?\n", x, y);
            scanf("%d", &soma);
            i++;

            if (soma == (x + y)){
                printf("Resposta correta!\n");
                resp++;
            }
            else{
                printf("Resposta incorreta!\n");
                errado++;
            }    
        }

    }

    printf("Respostas corretas: %d\nRespostas incorretas: %d\n", resp, errado);
    printf("Nota: %d\n", resp * 2);
    

    return 0;
}
