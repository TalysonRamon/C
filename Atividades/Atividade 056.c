/*
Faça um programa que receba dois valores inteiros, e construa um número real cuja
parte inteira corresponde ao resto da divisão do primeiro pelo segundo valor e a parte
fracionário é composta pelos dois dígitos menos signicativos do quociente da divisão
do primeiro pelo segundo valor recebido.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nreal;
    int n1, n2, resto, quociente;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &n2);

    resto = n1 % n2;
    
    printf("O número na forma real é: %.2f", fracionaria);
    return 0;
}
