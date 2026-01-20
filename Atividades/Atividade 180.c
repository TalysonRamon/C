#include<stdio.h>
/*
                        Lista - Questão 180
Faça um programa que permita ao usuário fornecer diversos valores positivos. O pro
grama deverá parar de solicitar valores quando o usuário fornecer um valor negativo.
Ao final, o programa deverá informar a soma dos valores lidos. Obs: o valor negativo
(último valor entrado) não deve entrar na conta da soma
*/

int main()
{
    int n, soma = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n >= 0){
            soma += n;
        }
        
    } while (n >= 0);

    printf("\nA soma dos valores lidos e: %d", soma);
    
    return 0;
}
