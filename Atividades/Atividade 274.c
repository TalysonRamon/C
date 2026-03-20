#include<stdio.h>
/*
                        Lista - Questão 274
Leia um texto de até 140 caracteres e informe a quantidade total de caracteres; a
quantidade de caracteres diferentes de espaço em branco; a quantidade de palavras.
*/

int main()
{
    int i, quant_total = 0, quant_sem_espaco = 0, palavra = 1;
    char v[140];

    printf("Digite um texto de no maximo 140 caracteres: ");
    scanf("%141[^\n]", v);

    for ( i = 0; v[i] != '\0'; i++){
        quant_total++;
        if ((int)v[i] != 32){
            quant_sem_espaco++;
        }
        else
            palavra++;
    }
    
    printf("Quantidade total de caracteres: %d\nQuantidade de caracteres diferente de espaco em branco: %d\nQuantidade de palavras: %d", quant_total, quant_sem_espaco, palavra);
    return 0;
}