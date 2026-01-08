#include<stdio.h>
/*
                                Lista - Questão 133
Leia a nota e o número de faltas de um aluno e escreva seu conceito de acordo com a
tabela 3.3.
*/

int main()
{
    int falta;
    float nota;

    printf("Digite sua nota e o numero de faltas: ");
    scanf("%f%d", &nota, &falta);
    
    if (falta <= 20){
        if (nota >= 9){
            printf("A");
        }
        else if ((nota >= 7.5) && (nota <= 8.9)){
            printf("B");
        }
        else if ((nota >= 5) && (nota <= 7.4)){
            printf("C");
        }
        else if ((nota >= 4) && (nota <= 4.9)){
            printf("D");
        }
        else
            printf("E");
    }
    else{
        if (nota >= 9){
            printf("B");
        }
        else if ((nota >= 7.5) && (nota <= 8.9)){
            printf("C");
        }
        else if ((nota >= 5) && (nota <= 7.4)){
            printf("D");
        }
        else if ((nota >= 4) && (nota <= 4.9)){
            printf("E");
        }
        else
            printf("E");
    }    
    return 0;
}
