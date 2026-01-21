#include<stdio.h>
/*
                         Lista - Questão 189
Escreva um programa que leia o número de habitantes de uma determinada cidade, o
valor do kwh e, para cada habitante, entre com os dados: consumo do mês e o código
do consumidor (1: residencial, 2: comercial, 3: industrial). No final, imprima o maior,
o menor e a média de consumo dos habitantes e, por fim, o total de consumo de cada
categoria de consumidor
*/

int main()
{
    int hab, i, cont = 0, codigo;
    float valor, consumo, maior = 0, menor = 0, soma = 0, res = 0, com = 0, ind = 0;

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &hab);
    printf("Digite o valor do Kwh: ");
    scanf("%f", &valor);

    for ( i = 1; i <= hab; i++){
        printf("Digite o consumo do mes do habitante numero %d: ", i);
        scanf("%f", &consumo);
        if (i == 1){
            maior = consumo;
            menor = consumo;
        } 

        if (maior < consumo){
            maior = consumo;
        }
        if (menor > consumo){
            menor = consumo;
        }
        soma += consumo;
        cont++;

        do{
            printf("Digite o codigo do habitante %d (1: residencial, 2: comercial, 3: industrial) : ", i);
            scanf("%d", &codigo);
        } while (codigo < 1 || codigo > 3);

        if (codigo == 1){
            res += consumo;
        }
        if (codigo == 2){
            com += consumo;
        }
        if (codigo == 3){
            ind += consumo;
        }
        
    }

    printf("Maior consumo: %.2f R$\nMenor consumo: %.2f R$\nMedia de consumo: %.2f R$\n", maior * valor, menor * valor, (soma / cont) * valor);
    printf("Consumo residencial: %.2f R$\nConsumo comercial: %.2f R$\nConsumo Industrial: %.2f R$", res * valor, com * valor, ind * valor);
    
    return 0;
}
