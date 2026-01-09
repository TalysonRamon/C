#include<stdio.h>
/*
                        Lista - Ativiadade 141
Escreva um programa completo que, dados dois números inteiros, mostre na tela o
maior deles, assim, como a diferença existente entre ambos
*/

int main()
{
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);

    if (a > b){
       printf("%d > %d\nA diferenca entre eles e: %d", a, b, a - b); 
    }
    else if (a < b){
        printf("%d > %d\nA diferenca entre eles e: %d", b, a, b - a); 
    }
    else{
        printf("%d = %d\nA diferenca entre eles e: %d", a, b, a - b); 
    }
       
    return 0;
}
