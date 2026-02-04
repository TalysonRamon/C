#include<stdio.h>
/*
                            Aula - Questão 5 | Lista IV
Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.
*/

int main()
{
    int cont = 0, i, tempmaior = 0, tempmenor = 0;
    float mediatemp[12], maior = 0, menor = 0;

    for ( i = 0; i < 12; i++){
        cont++;
        printf("Digite a temperatura media no mes %d: ", cont);
        scanf("%f", &mediatemp[i]);
    }

    maior = mediatemp[0];
    menor = mediatemp[0];
    for ( i = 0; i < 12; i++){
        if (maior < mediatemp[i]){
            maior = mediatemp[i];
            tempmaior = i;
        }
        if (menor > mediatemp[i]){
            menor = mediatemp[i];
            tempmenor = i;
        }
    }
    
    switch (tempmaior)
    {
    case 0:
        printf("Janeiro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 1:
        printf("Fevereiro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 2:
        printf("Marco e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 3:
        printf("Abril e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 4:
        printf("Maio e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 5:
        printf("Junho e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 6:
        printf("Julho e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 7:
        printf("Agosto e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 8:
        printf("Setembro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 9:
        printf("Outubro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 10:
        printf("Novembro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    case 11:
        printf("Dezembro e o mes com maior media de temperatura. Chegando a: %.2f graus\n", maior);
        break;
    default:
        printf("Erro!\n");
        break;
    }

    switch (tempmenor)
    {
    case 0:
        printf("Janeiro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 1:
        printf("Fevereiro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 2:
        printf("Marco e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 3:
        printf("Abril e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 4:
        printf("Maio e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 5:
        printf("Junho e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 6:
        printf("Julho e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 7:
        printf("Agosto e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 8:
        printf("Setembro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 9:
        printf("Outubro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 10:
        printf("Novembro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    case 11:
        printf("Dezembro e o mes com menor media de temperatura. Chegando a: %.2f graus\n", menor);
        break;
    default:
        printf("Erro!\n");
        break;
    }
    
    return 0;
}