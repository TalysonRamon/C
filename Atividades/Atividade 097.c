#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
                            Lista - Questão 097
Faça um programa que gere três valores aletórios inteiros que estejam dentro do inter
valo fechado [a;b]. Os limites inferior (a) e superior (b) são fornecidos pelo usuário.
*/

int main()
{
    int a, b, i;

    srand(time(NULL));
    printf("Digite o intevalo o valor do intervalo fechado: ");
    scanf("%d%d", &a, &b);

    for ( i = 0; i < 3;)
    {
        int x = rand();
        if (x <= a && x >= b && a >= b)
        {
            i++;
            printf("%d <= %d >= %d\t\t", a, x, b);
        } else if (x >= a && x <= b && b >= a)
        {
            printf("%d <= %d >= %d\t\t", b, x, a);
            i++;
        }
    }
    
    return 0;
}