#include<stdio.h>
/*
            Lista - Questão 123
Faça um programa que receba a altura (em metros) e o peso de uma pessoa (em quilos).
Veri que qual a classi cação dessa pessoa, de acordo com a tabela 3.1
*/

int main()
{
    float altura, peso;

    printf("Digite sua altura e seu peso: ");
    scanf("%f%f", &altura, &peso);

    if (altura < 1.20 && peso <= 60){
        printf("Classificacao: A");
    }
    else if (altura < 1.20 && (peso > 60 && peso <= 90)){
        printf("Classificacao: D");
    }
    else if (altura < 1.20 && peso > 90){
        printf("Classificacao: G");
    }
    if ((altura >= 1.20 && altura <= 1.70) && peso <= 60){
        printf("Classificacao: B");
    }
    else if ((altura >= 1.20 && altura <= 1.70) && (peso >= 60 && peso <= 90)){
        printf("Classificacao: E");
    }
    else if ((altura >= 1.20 && altura <= 1.70) && peso > 90){
        printf("Classificacao: H");
    }
    if (altura > 1.70 && peso <= 60){
        printf("Classificacao: C");
    }
    else if (altura > 1.70 && (peso > 60 && peso <= 90)){
        printf("Classificacao: F");
    }
    else if (altura > 1.70 && (peso > 90)){
        printf("Classificacao: I");
    }
    
    return 0;
}
