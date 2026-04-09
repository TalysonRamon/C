#include<stdio.h>
/*
                        Lista - Questão 282
Escreva um programa que leia a idade e o primeiro nome de várias pessoas. Seu
programa deve terminar quando uma idade negativa for digitada. Ao terminar, seu
programa deve escrever o nome e a idade das pessoas mais jovens e mais velhas.
*/

int main()
{
    int i = 0, maior, menor, maior_nome = 0, menor_nome = 0, cont = 0;
    int idade[101];
    char nome[101][50];
    do{
        printf("Digite seu nome: ");
        scanf(" %49[^\n]", nome[i]);
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
        if (idade[i] < 0){
            break;
        }
        else
            cont++;
        i++;
    } while (idade[i - 1] >= 0);

    maior = idade[0];
    menor = idade[0];
    for ( i = 0; i < cont; i++){
        if (maior < idade[i]){
            maior = idade[i];
            maior_nome = i;
        }
        if (menor > idade[i]){
            menor = idade[i];
            menor_nome = i;
        }
    }
    
    printf("\nMaior idade: %s - %d anos\n", nome[maior_nome], maior);
    printf("Menor idade: %s - %d anos\n", nome[menor_nome], menor);
    return 0;
}