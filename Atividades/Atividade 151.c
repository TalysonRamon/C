#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 151
Faça um programa que calcule as raízes de uma equação de segundo grau. O usuário
deverá fornecer os coe cientes a, b e c para uma equação na forma ax2 +bx+c = 0. O
programa deverá exibir as raízes encontradas, sejam elas reais ou complexas (caso em
que ∆ <0)
*/

int main()
{
    float a, b, c, delta, x1, x2;
    printf("Digite os coeficientes a, b, e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0){
        printf("Esta nao e uma equacao do segundo grau!\n");
    }
    else{
        delta = (b * b) - (4 * a * c);
        if (delta < 0){
            x1 = (sqrt(-delta) / (2 * a));
            printf("raiz' = %.2f + %.2fi\n", -b / (2 * a), x1);
            x2 = (sqrt(-delta) / (2 * a));
            printf("raiz\" = %.2f - %.2fi", -b / (2 * a), x2);
        }
        else if (delta > 0){
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("Primeira raiz %.2f\nSegunda raiz %.2f", x1, x2);
        }
        else{
            x1 = (-b + sqrt(delta)) / 2 * a;
            printf("A raiz e %.2f", x1);
        }
    }
    return 0;
}
