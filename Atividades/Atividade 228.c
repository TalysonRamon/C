#include<stdio.h>
/*
                            Lista - Questão 228
Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em
1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem
ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.
*/

int main()
{
    int i;
    double sal = 2000, n;

    n = 0.015;

    for ( i = 1; i <= 31; i++){
        sal += (sal * n);
        n = n * 2;
    }
    
    printf("%.2f R$", sal);
    return 0;
}
