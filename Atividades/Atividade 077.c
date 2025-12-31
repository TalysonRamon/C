#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 77
Faça um programa que leia dois pontos correspondentes a dois vetores no plano carte
siano e calcule o ângulo entre esses dois vetores
*/

int main()
{
    int x1, y1, x2, y2, pe;
    float pv, tot, resul;

    printf("Digite 2 valores para o primeiro ponto (x, y): ");
    scanf("%d%d", &x1, &y1);
    printf("Digite 2 valores para o segundo ponto (x, y): ");
    scanf("%d%d", &x2, &y2);
    
    pe = (x1 * y1) + (x2 * y2);
    
    pv = sqrt(pow(x1, 2) + pow(y1, 2)) * sqrt(pow(x2, 2) + pow(y2, 2));

    tot = pe / pv;

    resul = (-0.946 * tot) * 100;

    if (resul < 0){
        resul = resul * (-1);
    }
    

    printf("O angulo entre os dois pontos e: %.3f°", resul);

    return 0;
}
