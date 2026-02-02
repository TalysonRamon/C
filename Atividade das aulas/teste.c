#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Matri z:

int main()
{

    int alt[2][2], i, j;
    
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){

            printf("Digite a posicao [%d] [%d] da matriz: ", i, j);
            scanf("%d", &alt[i][j]);
            alt[i][j] *= 2;
        }
    }
    
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            printf("%3d ", alt[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}