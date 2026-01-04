#include<stdio.h>
/*
                            Lista - Questão 087
Faça um programa para ler as dimensões de um terreno (comprimento e largura), o
preço do metro de arame e calcular o custo total para cercar o terreno. O programa
também deve informar quantos metros de cerca devem ser comprados.
*/

int main()
{
    float compri1, compri2, larg1, larg2, prearame, mcerca;

    printf("Digite as comprimento dos dois lados de um terreno: ");
    scanf("%f%f", &compri1, &compri2);
    printf("Digite a largura dos dois lados do terreno: ");
    scanf("%f%f", &larg1, &larg2);
    printf("Digite o preco do metro do arame: ");
    scanf("%f", &prearame);

    mcerca = compri1 + compri2 + larg1 + larg2;

    printf("Total de cerca %.1f m\nCusto para cercar o terreno: %.2f R$", mcerca, mcerca * prearame);
    
    return 0;
}
