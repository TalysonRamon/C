#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                        Lista - Questão 186
Faça um programa que gere um número aleatório no intervalo [0;200] e paça o
usuário para adivinhar o número. Caso o usuário acerte, imprima uma mensagem
parabenizando-o e nalize o programa. Caso o valor que o usuário forneça esteja incor
reto, o programa deverá mostrar uma das seguintes mensagens:

• Pegando Fogo! (caso o valor correto esteja a 5 unidades ou menos do valor
fornecido pelo usuário).
• Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
• Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
• Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
• Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
• Gelando (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
• Congelou! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).

O programa deverá permitir que o usuário faça novas tentativas até encontrar o valor
correto ou até disparar a mensagem Congelou! . Também deve ser exibida a quantidade
de tentativas que o usuário efetuou.
*/

int main()
{
    int unidades, x, valor, cont = 1;

    srand(time(NULL));

    x = rand();
    x = x % 201;


    printf("\n*****  Tente descobrir o numero:  *****\n\n");
    printf("Digite um numero entre [0,200]: ");
    scanf("%d", & valor);

    unidades = valor - x;
    if (unidades < 0){
        unidades = -(valor - x);
    }

    while ((valor < x || valor > x) && unidades <= 75){
        if (unidades <= 5){
            printf("Pegando Fogo!\n");
        }
        else if (unidades >= 6 && unidades <= 10){
            printf("Muito Quente!\n");
        }
        else if (unidades >= 11 && unidades <= 20){
            printf("Quente!\n");
        } 
        else if (unidades >= 21 && unidades <= 30){
            printf("Frio!\n");
        }
        else if (unidades >= 31 && unidades <= 50){
            printf("Muito frio!\n");
        }
        else if (unidades >= 51 && unidades <= 75){
            printf("Gelando!\n");
        }

        printf("Digite um numero entre [0,200]: ");
        scanf("%d", & valor);  
        
         unidades = valor - x;
        if (unidades < 0){
            unidades = -(valor - x);
        }

        cont++;
    }

    if (valor == x){
        printf("Parabens! Acertou o valor!\n");
    }
    else
        printf("Congelou!\n");

    printf("Tentativas: %d", cont);
    
    
    return 0;
}
