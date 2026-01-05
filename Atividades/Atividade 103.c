#include<stdio.h>
#include<math.h>
/*
                    Lista - Questão 103
Ler um número real e arredondar para o número mais próximo.
Obs.: não é necessário o uso de estruturas condicionais neste programa.
Dica: use a função ceil ou floor da biblioteca math.h
*/
int main()
{
    double x, frac;
    double inteira;

    printf("Digite um numero real: ");
    scanf("%lf", &x);

    frac = modf(x, &inteira);

    if (frac <= 0.5){
        printf("Arredondando: %.2f", floor(x));
    }
    else{
        printf("Arredondando %.2f", ceil(x));
    }
    
    return 0;
}
