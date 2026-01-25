#include<stdio.h>
/*
                                Lista - Questão 231
Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles
e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve
ser fornecida pelo usuário
*/

int main(){
    int n, valor, maior = 0, cont = 0, i;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (maior <= valor){
            if (maior == valor){
                cont++;
            }
            else{
                cont = 1;
            }
            maior = valor;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Quantidade de vezes lido: %d", cont);
    
    return 0;
}
