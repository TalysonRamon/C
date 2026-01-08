#include<stdio.h>
/*
                        Lista - Questão 132
Leia uma distância em quilômetros e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de
acordo a tabela 3.2.
*/

int main()
{
    float dist, gaso, consu;

    printf("Digite a distancia percorrida em Km e o consumo em l: ");
    scanf("%f%f", &dist, &gaso);

    consu = dist / gaso;

    if (consu < 8){
        printf("Venda o carro!");
    }
    else if ((consu >= 8) && (consu <= 14)){
        printf("Economico!");
    }
    else
        printf("Super economico!");
    
    return 0;
}
