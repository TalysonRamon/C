#include<stdio.h>
/*
                                Lista - Questão 246
Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
ser informado a quantidade de dados lidos e a quantidade de números pares. O processo
termina quando for digitado o valor 1000.
*/

int main()
{
    int n, i, cont = 0, lidos = 0;

    do{
        do{
            printf("Digite um numero inteiro positivo: ");
            scanf("%d", &n);
        } while (n < 0);
        lidos++;
        for ( i = 1; i <= n; i++){
            if (i % 2 == 0){
                cont++;
            } 
        }
        
    } while (n != 1000);

    printf("Quantidade de dados lidos: %d\n", --lidos);
    printf("Quantidade de numeros par: %d\n", cont -= 500);

    return 0;
}
