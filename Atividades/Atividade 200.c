#include<stdio.h>
/*
                            Lista - Questão 200
Peça ao usuário para digitar 10 valores, some estes valores e mostre o resultado
*/

int main()
{
    int i;
    float n, soma = 0;

    for ( i = 1; i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &n);
        soma += n;
    }

    printf("Soma: %.2f", soma);
    
    return 0;
}
