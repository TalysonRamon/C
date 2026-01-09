#include<stdio.h>
#include<math.h>
/*
                        Lista - Questão 139
Ler um número inteiro e maior que zero. Caso o número fornecido seja negativo,
escreva uma mensagem de erro e solicite nova tentativa. Faça até cinco tentativas, se o
usuário não fornecer um número válido nestas tentativas, imprima uma mensagem de
erro e nalize o programa. Caso o usuário tenha fornecido um valor válido, calculeo o
logaritmo natural do valor lido
*/

int main()
{
    int n, i, valor = 0;

    for ( i = 0; i < 5; i++){
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &n);
        if (n > 0){
            valor = n;
            i += 5;
            printf("O log de %d e: %.2f", valor, log(valor));
        }
    }
    if (n < 0){
        printf("Erro!");
    }
    
    return 0;
}
