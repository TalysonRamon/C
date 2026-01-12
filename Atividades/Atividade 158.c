#include<stdio.h>
/*
                        Lista - Questão 158
Ler três valores A, B e C. Neste programa é necessário que A >= B >= C, portanto
poderá ser necessário a troca de valores entre as variáveis.
Dica: use uma variável auxiliar para trocar os valores entre duas variáveis
*/

int main()
{
    float a, b, c, d = 0;

    printf("Digite tres valores: ");
    scanf("%f%f%f", &a, &b, &c);

    if (c >= a && c >= b && a >= b){
        d = c;
        c = b;
        b = a;
        a = d;
        printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
    else if (a >= c && a >= b && b >= c){
        printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
    else if (b >= a && b >= c && a >= c){
       d = b;
       b = a;
       a = d;
       printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
    else if (c >= a && c >= b && b >= a)
    {
        d = c;
        c = a;
        a = d;
        printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
    else if (a >= c && a >= b && c >= b)
    {
        d = c;
        c = b;
        b = d;
        printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
    else if (b >= a && b >= c && c >= a){
        d = b;
        b = c;
        c = a;
        a = d;
        printf("%.2f >= %.2f >= %.2f", a, b, c);
    }
     
    return 0;
}
