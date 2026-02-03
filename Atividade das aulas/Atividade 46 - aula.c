#include<stdio.h>
/*
                            Aula - Questão 4 | Lista IV
Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/

int main()
{
    int v2[10], soma = 0, maior = 0, i;
    float v1[10], total = 0;

    for ( i = 0; i < 10; i++){
        printf("Digite o valor do produto %d: ", i);
        scanf("%f", &v1[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i);
        scanf("%d", &v2[i]);
    }

    for ( i = 0; i < 10; i++){
        soma += v2[i];
        printf("Valor unitario do objeto %d: %d\n", i, v2[i]);
    }

    for ( i = 0; i < 10; i++){
        printf("Valor total do objeto %d: %.2f R$\n", i, (v1[i] * v2[i]));
        total += v1[i] * v2[i];
    }


    for ( i = 0; i < 10; i++){
        if (maior < v2[i]){
            maior = v2[i];
        }
        
    }
    
    for ( i = 0; i < 10; i++){
        if (maior == v2[i]){
           printf("Valor do objetos mais vendidos: %d R$    Posicao do objeto mais vendido: [%d]\n", maior, i);
        }
        
    }
    
    printf("\nA quantidade vendida: %d\n", soma);
    printf("Valor total das vendas: %.2f R$\n", total);
    printf("Porcentagem do vendedor: %.2f R$\n", 1100 + (total * 0.05));
    
    return 0;
}