/*
Faça um programa capaz de ler um número de quatro dígitos e escrever cada dígito em
uma linha na tela.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n;
    int milhar, centena, dezena, unidade;

    printf("Digite um número de 4 digitos: ");
    scanf("%d", &n);

    //Cálculo para separar cada parte do número.
    milhar = (n / 1000);
    centena = (n/100) % 10;
    dezena = (n/10) % 10;
    unidade = n % 10;

    //Exibi o cada parte do número em uma linha.
    printf("%d\n%d\n%d\n%d", milhar, centena, dezena, unidade);
    return 0;
}
