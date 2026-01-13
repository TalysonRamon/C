#include<stdio.h>
/*
Lista - Questão 162
Faça um programa para calcular o índice de massa corporal (IMC) de uma pessoa
e mostre sua classi cação de acordo com a tabela 3.11. Para calcular o IMC use a
seguinte fórmula: IMC = massa(kg) / altura2(m).
*/
int main()
{
    float massa, altura, imc;

    printf("Digite sua massa(kg) e sua altura(m): ");
    scanf("%f%f", &massa, &altura);

    imc = massa / (altura * altura);

    if (imc <= 18.5){
        printf("Abaixo do peso!");
    }
    else if (imc >= 18.6 && imc <= 24.9){
        printf("Saudavel!");
    }
    else if (imc >= 25 && imc <= 29.9){
        printf("Acima do peso!");
    }
    else if (imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I");
    }
    else if (imc >= 35 && imc <= 39.9){
        printf("Obesidade grau II (severa)!");
    }
    else 
        printf("Obesidade grau III (morbida)!");
    
    return 0;
}
