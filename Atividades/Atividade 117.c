#include<stdio.h>
/*
                        Lista - Questão 117
Receber o salário de um trabalhador e o valor de um empréstimo. Se a prestação for
maior que 20% do salário imprima Empréstimo não concedido, caso contrário imprima
Empréstimo autorizado.
*/

int main()
{
    float sal, emp, valor;
    int parc;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("Qual o valor do emprestimo: ");
    scanf("%f", &emp);
    printf("Em quantas parcelas: ");
    scanf("%d", &parc);

    sal = sal * 0.2;
    valor = emp / parc;

    if (valor > sal){
        printf("Emprestimo nao concebido!");
    }
    else
        printf("Emprestimo concebido!");
    
    return 0;
}
