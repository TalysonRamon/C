#include<stdio.h>
/*
                                    Lista - Questão 
Assuma que o trabalhador do exercício anterior deve pagar 10% de imposto se o seu
salário anual for menor ou igual a R$ 12.000,00. Caso o salário seja maior que este
valor o imposto devido é igual a 10% sobre R$ 12.000,00 mais 25% sobre o que passar
de R$ 12.000,00. Escreva um programa que calcule o imposto devido pelo trabalhador
*/

int main()
{
    float horas, horasex, sal, imp;

    printf("Digite as horas normais trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o total de horas extras: ");
    scanf("%f", &horasex);

    sal = (horas * 10) + (horasex * 15);
    imp = (horas * 10) + (horasex * 15);

    if (sal <= 12000){
        printf("Salario anual: %.2f R$", sal - (sal * 0.1));
    }
    else{
        sal = sal - 12000;
        sal = sal - (sal * 0.25);
        printf("Salario anual: %.2f R$", 10800 + sal);
    }
    printf("\nImposto: %.2f R$", imp - (10800 + sal));

    return 0;
}
