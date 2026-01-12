#include<stdio.h>
/*
                            Lista - Questão 157
Ler três valores A, B e C. Neste programa é necessário que A <= B <= C, portanto
poderá ser necessário a troca de valores entre as variáveis.
Dica: use uma variável auxiliar para trocar os valores entre duas variáveis
*/

int main()
{
    float a, b, c, d = 0;

    printf("Digite tres valores: ");
    scanf("%f%f%f", &a, &b, &c);

    if (c >= a && c >= b && a >= b){
        d = b;
        b = a;
        a = d;
        printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
    else if (a >= c && a >= b && b >= c){
        d = a;
        c = a;
        a = c;
        printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
    else if (b >= a && b >= c && a >= c){
       d = c;
       c = b;
       b = a;
       a = d;
       printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
    else if (c >= a && c >= b && b >= a)
    {
        printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
    else if (a >= c && a >= b && c >= b)
    {
        d = a;
        a = b;
        b = c;
        c = d;
        printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
    else if (b >= a && b >= c && a >= c){
        d = b;
        b = a;
        a = c;
        c = d;
        printf("%.2f <= %.2f <= %.2f", a, b, c);
    }
     
    return 0;
}
