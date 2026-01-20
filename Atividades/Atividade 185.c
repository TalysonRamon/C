#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 185
Faça um programa que gere um número aleatório no intervalo [0;1000] e peça o usuário
para adivinhar o número. Caso o usuário acerte, imprima uma mensagem parabeni
zando o usuário e finalize o programa, caso contrário diga se o número fornecido está
acima ou abaixo do valor correto e permita que o usuário faça uma nova tentativa. No
nal, mostre a quantidade de tentativas necessárias para acertar o número sorteado.
*/

int main()
{
    int valor, x;

    srand(time(NULL));

    x = rand();
    x = x % 1001;

    printf("\n\tTente descobrir o numero:\n\n");
    printf("Digite um numero entre [0,1000]: ");
    scanf("%d", &valor);

    while (x < valor || x > valor){
        if (valor > x){
            printf("Numero fornecido esta acima!\nDigite Novamente: ");
            scanf("%d", &valor);
        }
        else if (valor < x){
            printf("Numero fornecido esta abaixo!\nDigite Novamente: ");
            scanf("%d", &valor);
        }
    }

    printf("\nParabens! Voce acertou o numero!");
    
    return 0;
}
