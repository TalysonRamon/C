#include<stdio.h>
/*
                            Lista - Questão 137
Leia uma data e determine se a data fornecida é válida. Lembre-se que o mês de
fevereiro tem 29 dias em anos bissextos
*/

int main()
{
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d%d%d", &dia, &mes, &ano);

    if (ano % 4 == 0 || (ano % 400 == 0 && ano % 100 != 0)){
        
    }

    switch (mes)
    {
    case 1:
        if (dia > 0 && dia <= 31){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 2: 
        if ((ano % 4 == 0) || (ano % 400 == 0 && ano % 100 != 0)){
            if (dia > 0 && dia <= 29){
                printf("Data valida!");
            }
        } 
        else if (dia > 0 && dia <= 28){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 3:
        if (dia > 0 && dia <= 31){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 4:
        if (dia > 0 && dia <= 30){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 5:
        if (dia > 0 && dia <= 31){
            printf("Data valida!");
        }
        else
            printf("Data invalida");
        break;
    case 6:
        if (dia > 0 && dia <= 30){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 7:
        if (dia > 0 && dia <= 31){
            printf("Data Valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 8:
        if (dia > 0 && dia <= 31){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 9:
        if (dia > 0 && dia <= 30){
            printf("Data valida!");
        }
        else
            printf("Data invalida!");
        break;
    case 10:
        if (dia > 0 && dia <= 30){
            printf("Data valida");
        }
        else
            printf("Data invalida!");
        break;
    case 11:
        if (dia > 0 && dia <= 30){
           printf("Data valida!"); 
        }
        else
            printf("Data invalida!");
        break;
    case 12:
        if (dia > 0 && dia <= 31){
            printf("Data valida!");
        }
        else 
            printf("Data invalida!");
        break;
    default:
        printf("Data incorreta!");
        break;
    }
    
    return 0;
}