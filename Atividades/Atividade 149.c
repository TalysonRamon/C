#include<stdio.h>
#include<math.h>
/*
                                Lista - Questão 149
Faça um programa que calcule as raízes de uma equação de segundo grau. O usuário
deverá fornecer os coeficientes a, b e c para uma equação na forma ax2 + bx + c = 0.
Considerer que:
• O valor do coeficiente a deve ser diferente de zero, caso contrário o programa
deverá exibir a mensagem Esta não é uma equação de segundo grau.
• Se ∆ < 0, então não existe raízes reais para a equação. Imprima a mensagem
Não existe raiz real 
• Se ∆ = 0, então existe apenas uma raiz real. Imprima a raiz encontrada e a
mensagem Raíz única.
• se ∆ > 0, então existem duas raizes reais. Imprima o valor das raízes
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
            printf("Nao existe raiz real!");
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
