#include<stdio.h>
/*
                            Lista - Questão 242
Faca um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um número
dado
*/

int main()
{
    int i, cont;

    do{
        printf("Digite um numero (maior que 16): ");
        scanf("%d", &cont);
    }while(cont < 16);

    for ( i = 1; i <= 1;){
        cont++;
        if (cont % 11 == 0 && cont % 13 == 0 && cont % 17 == 0){
            i++;
        }
    }
    
    printf("%d", cont);
    return 0;
}
