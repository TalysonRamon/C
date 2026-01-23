#include<stdio.h>
/*
                            Lista - Questão 219
Faça um programa que leia um número indeterminado de linhas contendo cada uma a
idade de um indivíduo (pare quando for informada a idade 0), e calcule a idade média
desse grupo de indivíduos.
*/

int main()
{
    int idade, soma = 0, cont = 0;

    do
    {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if (idade < 0){
            printf("\nIdade invalida!\n");
        }
        else{
            soma += idade;
            cont ++;
        }
        
    } while (idade < 0 || idade > 0);

    printf("\nMedia de idades: %.2f", (float)soma / cont);
    
    return 0;
}
