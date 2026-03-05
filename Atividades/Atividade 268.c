#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 268
Faça um programa que crie um vetor com 25 posições contendo uma permutação alea
tória dos valores de 1 a 25.
Dica: começe por atribuir os valores de 1 a 25 ao vetor (obtendo um vetor ordenado)
e depois calcule uma permutação aleatória deste vetor (obtendo um vetor desordenado
mas com os mesmos valores).
*/

//Criar dois vetores, 1 com valores de 1 a 25 e outro vetor = {};
//Criar um if para verificar se o vetor 2 esta vazio;
int main()
{
    int v1[25] = {}, n = 1, i, v2[25] = {}, j;

    srand(time(NULL));

    for ( i = 0; i < 25; i++){
        v1[i] = n;
        n++;
    }
    
    for ( i = 0; i < 25; i++){
        v2[i] = 0;
    }
    
    for (i = 0; i < 25; i++) {

        do {
            j = rand() % 25;
        } while (v2[j] != 0);

        v2[j] = v1[i];
    }

    printf("\n");
    for ( i = 0; i < 25; i++){
        printf("%d ", v2[i]);
    }
    

    return 0;
}