#include<stdio.h>
/*
                        Lista - Questão 275
Leia uma palavra e verifique se a mesma é um palíndromo. Um palíndromo é uma
palavra que, se lida de trás para frente, apresenta a mesma grafia da leitura normal.
Exemplos: ovo, arara, asdfjkkjfdsa
*/

int main()
{
    int i, n = 0, palindromo, cont = 0;
    char v[100];

    printf("Digite uma palavra: ");
    scanf("%101[^\n]", v);

    printf("\nPalavra digitada: ");
    for ( i = 0; v[i] != '\0'; i++){
        n++;
        printf("%c", v[i]);
    }
    palindromo = n;
    
    printf("\n\nPalavra invertida: ");
    for ( i = 0; v[i] != '\0'; i++){
        if ((int)v[i] == (int)v[n - 1]){
            cont++;
        }
        printf("%c", v[n - 1]);
        n--;
    }
    
    if (cont == palindromo){
        printf("\n\nA palavra e um palindromo!");
    }
    else
        printf("\n\nA palavra digitada nao e um palindromo!");
    return 0;
}