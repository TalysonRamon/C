#include<stdio.h>
/*
                    Lista - Questão 255
Faça um programa que declare uma matriz usando o seguinte comando:
double m[3][3]={{1,2,3},{},{7,8,9}};
Oprograma deve exibir o conteúdo da matriz. Explique o resultado obtido na exibição.
*/

int main()
{
    int i, j;
    double m[3][3] = {{1,2,3},{},{7,8,9}};

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%.2lf ", m[i][j]);
        }
        printf("\n");
    }
    
    /*
    Resultado:
    1.00 2.00 3.00 
    0.00 0.00 0.00
    7.00 8.00 9.00
    */
    return 0;
}
