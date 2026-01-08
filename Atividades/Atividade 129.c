#include<stdio.h>
/*
                            Lista - Questão 129
Faça um programa para veri car se um determinado número, fornecido pelo usuário, é
divisível por 3 ou por 5 mas não por ambos
*/

int main()
{
    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if ((n1 %  3 == 0) && (n1 % 5 == 0)){
        
    }
    else if (n1 % 3 == 0){
        printf("Divisivel por 3");
    } 
    else if (n1 % 5 == 0){
        printf("Divisivel por 5");
    }
    
    return 0;
}
