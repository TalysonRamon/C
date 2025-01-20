/*
Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int func, i;
    float sal, maior = 0, menor = 0, med = 0;

    printf("Digite a quantidade de funcionários: ");
    scanf("%d", &func);
    printf("Digite o salário do 1° funcionário: ");
    scanf("%f", &sal);
    menor = sal;
    maior = sal;
    med += sal;

    for ( i = 2; i <= func; i++)
    {
        printf("Digite o salário do %d° funcionário: ", i);
        scanf("%f", &sal);
        med += sal;
        if (maior < sal)
        {
            maior = sal;
        }
        if (menor > sal)
        {
            menor = sal;
        }
    }

    printf("A média de salarios é: %.2f\n", med / func);
    printf("O maior salário é: %.2f\n", maior);
    printf("O menor salário é: %.2f\n", menor);
    
    return 0;
}
