#include<stdio.h>
/*
                            Lista - Questão 177
 Faça um programa que solicite ao usuário informar um valor positivo. O programa
deverá repetir a solicitação caso o usuário forneça um valor inválido (negativo). Quando
o usuário fornecer um valor válido, mostre uma mensagem de texto confirmando o valor
entrado. Faça três versões desse programa, cada uma usando uma estrutura de repetição
diferente (for, while, do-while). Qual das três estruturas é a mais adequada para este
programa? Por que?
*/

int main()
{
    int i, n, n2, n3;

    for ( i = 0; i < 1;){
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
        if (n > 0){
            printf("Valor confirmado!");
            i++;
        }
        
    }
    printf("\nSegunda versao:\n");

    do{
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &n2);
    } while (n2 <= 0);
    printf("Valor confirmado!");

    printf("\nTerceira versao:\n");
    printf("Digite um valor inteiro maior que zero: ");
    scanf("%d", &n3);

    while (n3 <= 0){
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &n3);
    }
    printf("Valor confirmado!");
    
    return 0;
}
