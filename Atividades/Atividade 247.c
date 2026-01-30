#include<stdio.h>
/*
                            Lista - Questão 247
Construa um programa que permita introduzir pelo terminal uma sequência de números
inteiros e determine se cada um desses números é ou não perfeito. Todos os números
perfeitos encontrados deverão ser escritos na tela. Chama-se perfeito a um número
inteiro não negativo que seja igual à soma dos seus divisores próprios, exceto ele mesmo
(e.g. o número 6 possui divisores 1, 2, 3 e 6, portanto 1+2+3=6; 6 é um número
perfeito 
o número 8 possui divisores 1, 2, 4 e 8, portanto 1+2+4=7; 8 não é um
número perfeito)
*/

int main()
{
    int i, n, j, soma = 0;

    for ( i = 1; i <= 5; i++){
        do{
            printf("Digite um numero inteiro maior que zero: ");
            scanf("%d", &n);
        } while (n <= 0);
        
        for ( j = 1; j < n; j++){
            if (n % j == 0){
                soma += j;
            }
        }

        if (soma == n){
            printf("E um numero perfeito!\n");
        }
        else
            printf("Nao e um numero perfeito!\n");
        
        soma = 0;
    }
    
    return 0;
}
