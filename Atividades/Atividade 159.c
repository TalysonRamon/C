#include<stdio.h>
/*
Ler a data de nascimento de uma pessoa fornecida no formato dd/mm/aaaa. Verifique
a validade da data informada. O programa deverá informar se a data fornecida é válida
ou inválida
*/

int main()
{
    int dia, mes, ano;

    printf("Digite a sua data de nascimento: ");
    scanf("%d%d%d", &dia, &mes, &ano);

    if (mes <= 12 && mes > 0){
        if (mes == 1){
            if (dia <= 31 && dia > 0){
                printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 2){
            if (ano % 4 == 0){
              if (dia > 0 && dia <= 29){
                printf("Data valida!");
              }
              else
                printf("Data invalida!");
            }
            else
                if (dia > 0 && dia <= 28){
                    printf("Data valida!");
                }
                else
                    printf("Data invalida!");    
        }         
        else if (mes == 3){
            if (dia > 0 && dia <= 31){
                printf("Data valida!");
            }
            else
                printf("Data invalida!");
            
        }
        else if (mes == 4){
            if (dia > 0 && dia <= 30){
                printf("Data valida!");
            } 
            else
                printf("Data invalida!");
        }
        else if (mes == 5){
            if (dia > 0 && dia <= 30){
                printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 6){
            if (dia > 0 && dia <= 30){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 7){
            if (dia > 0 && dia <= 31){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 8){
            if (dia > 0 && dia <= 31){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 9){
            if (dia > 0 && dia <= 30){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 10){
            if (dia > 0 && dia <= 31){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 11){
            if (dia > 0 && dia <= 30){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }
        else if (mes == 12){
            if (dia > 0 && dia <= 31){
                  printf("Data valida!");
            }
            else
                printf("Data invalida!");
        }   
    }
    else
        printf("Data invalida!");
    return 0;
}
