#include<stdio.h>
/*
                            Lista - Questão 215
Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a fórmula a seguir:
E =1+1/1!+1/2!+1/3!+...+1/N!
*/

int main()
{
    int n, i, j, soma = 1;
    float res = 1;

    do
    {
        printf("Digite um valor inteiro maior que zero: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    for ( i = 1; i <= n; i++){
        soma = 1;
        for ( j = i; j >= 1; j--){
            soma = soma * j;
        }
        res += 1.0 / soma;
        
    }
    
    printf("Soma: %.2f", res);
    return 0;
}
