#include<stdio.h>
/*
                            Lista - Questão 085.c
Um cercado contém patos e coelhos. Faça um programa que solicita o total de cabeças
e o total de patas, e escreve quantos patos e quantos coelhos existem no cercado
*/

int main()
{
    int cab, patas, x, y;

    printf("Digite o total de cabecas: ");
    scanf("%d", &cab);
    printf("Digite o total de patas: ");
    scanf("%d", &patas);

    //y = 4 patas
    //x = 2 patas

    y = (patas - (2 * cab)) / 2;
    x = cab - y;

    if ((patas < (cab2 * 2)) || (patas % 2 != 0)){
        printf("Nao e possivel realizar a operacao pois a quantidade de patas nao condiz com a quantidade de cabeças!!");
    }
    else{
        printf("Total de Patos: %d\nTotal de coelhos: %d", x, y); 
    }
    
    return 0;
}
