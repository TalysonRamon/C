//Faça um programa que leia uma data no formato (dd/mm/aaaa) e mostre a data
//fornecida no formato (aaaa/mm/dd).

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int dia, mes, ano;
    printf("Digite sua data de nascimento: (dd/mm/aaaa)");
    scanf("%d""%d""%d", &dia, &mes, &ano);
    printf("Sua data de nascimento é: %d/%d/%d", ano, mes, dia);
    return 0;
}
