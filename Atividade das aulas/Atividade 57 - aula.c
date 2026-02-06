#include<stdio.h>
#include<string.h>
/*
                        Aula - Questão 15 | Lista IV
Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico ou não.
*/

int main()
{
    int m[4][4], i, j, diagp = 0, cont[100] = {0}, repitiu = 0, diags = 0, linha0 = 0, linha1 = 0, linha2 = 0, linha3 = 0;
    int coluna0 = 0, coluna1 = 0, coluna2 = 0, coluna3 = 0;
    //Pedindo ao usuario para digitar a matriz;

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
        
    //Conferindo se tem algum numero repitido.
    printf("\n");
    do{
        repitiu = 0;

        memset(cont, 0, sizeof(cont));
        
        for ( i = 0; i < 4; i++){
            for ( j = 0; j < 4; j++){
                cont[ m[i][j] ]++;
                if (cont[ m[i][j] ] > 1){
                    printf("O numero %d e repitido! Digite novamente o valor na posicao [%d][%d]: ", m[i][j], i, j);
                    scanf("%d", &m[i][j]);
                    repitiu = 1;
                    break;
                }
            }
            if (repitiu) break;
        }
    }while(repitiu);

    printf("\n");
    //Mostrando a matriz;
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            printf("%3d ", m[i][j]);
        }
        printf("\n");
    }

    //Diagonal principal;
    j = 0;
    for ( i = 0; i < 4; i++){
        diagp += m[i][j];
        j++;
    }

    //Diagonal secundaria;
    j = 3;
    for ( i = 0; i < 4; i++){
        diags += m[i][j];
        j--;
    }
    
    //Linha 0;
    i = 0;
    for ( j = 0; j < 4; j++){
        linha0 += m[i][j];
    }

    //Linha 1;
    i = 1;
    for ( j = 0; j < 4; j++){
        linha1 += m[i][j];
    }
    
    //Linha 2;
    i = 2;
    for ( j = 0; j < 4; j++){
        linha2 += m[i][j];
    }

    //Linha 3;
    i = 3;
    for ( j = 0; j < 4; j++){
        linha3 += m[i][j];
    }

    //Coluna 0;
    j = 0;
    for ( i = 0; i < 4; i++){
        coluna0 += m[i][j];
    }

    //Coluna 1;
    j = 1;
    for ( i = 0; i < 4; i++){
        coluna1 += m[i][j];
    }

    //Coluna 2;
    j = 2;
    for ( i = 0; i < 4; i++){
        coluna2 += m[i][j];
    }
    
    //Coluna 3;
    j = 3;
    for ( i = 0; i < 4; i++){
        coluna3 += m[i][j];
    }

    if (diagp == diags && diagp == linha0 && diagp == linha1 &&  diagp == linha2 && diagp == linha3 && diagp == coluna0 && diagp == coluna1 && diagp == coluna2 && diagp == coluna3){
        printf("\nE um quadrado perfeito!");
    }
    else
        printf("\nNao e um quadrado perfeito!");
    return 0;
}