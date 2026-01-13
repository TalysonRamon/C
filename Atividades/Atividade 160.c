#include<stdio.h>
/*
                            Lista - Questão 160
Uma empresa decide dar aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
com menor salário terão um aumento proporcionalmente maior do que os funcionários
com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá
receber um bônus adicional de salário. Faça um programa que leia:
• o valor do salário atual do funcionário;
• o tempo de serviço deste funcionário na empresa (quantidade de anos de trabalho
na empresa).
Use a tabela 3.9 para calcular o salário reajustado deste funcionário e imprima o valor
do salário nal reajustado, ou uma mensagem caso o funcionário não tenho direito a
aumento.
*/

int main()
{
    float sal; 
    int tempo;

    printf("Digite o seu salario atual e seu tempo de servico (em anos): ");
    scanf("%f%d", &sal, &tempo);

    if (sal <= 500){
        sal = sal + (sal * 0.25);
        printf("Salario: %.2f R$\n", sal);
    }
    else if (sal > 500 && sal <= 1000){
        sal = sal + (sal * 0.20);
        printf("Salario: %.2f R$\n", sal);
    }
    else if (sal > 1000 && sal <= 1500){
        sal = sal + (sal * 0.15);
        printf("Salario: %.2f R$\n", sal);
    }
    else if (sal > 1500 && sal <= 2000){
        sal = sal + (sal * 0.10);
        printf("Salario: %.2f R$\n", sal);
    }
    else{
        printf("Nao tem direito a aumento!");
        printf("Salario: %.2f R$\n", sal);
    }    
    if (tempo < 1){
        printf("Sem bonus!\n");
    }
    else if (tempo >= 1 && tempo <= 3){
        printf("Bonus de: 100,00 R$\n");
    }
    else if (tempo >= 4 && tempo <= 6){
        printf("Bonus de: 200,00 R$\n");
    }
    else if (tempo >= 7 && tempo <= 10){
        printf("Bonus de: 300,00 R$\n");
    }
    else 
        printf("Bonus de: 500,00 R$\n"); 
    

    return 0;
}
