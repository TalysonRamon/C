#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
/*
                    Lista - Questão 208
Faça um programa que calcule o terno pitagórico (a, b, c) para o qual:
a + b + c = 1000
Um terno pitagórico é um conjunto de três números naturais (a), (b) e (c) que satisfaz a relação:
a^2 + b^2 = c^2
Por exemplo:
3^2 + 4^2 = 9 + 16 = 25 = 5^2
*/

int main()
{
    int a, b, c, soma, a2, b2, c2;
    srand(time(NULL));

    do
    {
        a = rand() % 1000;
        b = rand() % 1000;
        c = rand() % 1000;

        soma = a + b + c;

        a2 = pow(a, 2);
        b2 = pow(b, 2);
        c2 = pow(c, 2);

    } while ((soma != 1000) || ((a2 + b2) != c2));

    printf("\na = %d\nb = %d\nc = %d", a, b, c);
    
    return 0;
}
