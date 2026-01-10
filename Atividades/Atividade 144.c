#include<stdio.h>
/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
categorias especificadas na tabela 3.8
*/

int main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("Infantil A");
    }
    else if (idade >= 8 && idade <= 10){
        printf("Infantil B");
    }
    else if (idade >= 11 && idade <= 13){
        printf("Infanto-juvenil");
    }
    else if (idade >= 14 && idade <= 17){
        printf("Juvenil");
    }
    else if (idade < 5){
        printf("Idade inapropriada para nadar!");
    }
    else
        printf("Senior");
    
    return 0;
}
