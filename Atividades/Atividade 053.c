/*
Faça um programa que leia o valor de horas, minutos e segundos gastos em um expe-
rimentos e converta esse tempo em segundos.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int h, m, se;

    printf("Digite as (horas/minutos/segundos) gastos em um experimento: ");
    scanf("%d%d%d", &h, &m, &se);

    //Transformando horas e minutos em segundos.
    h = h * 3600;
    m = m * 60;

    printf("Convertendo para segundos fica: %d segundos", h + m + se);
    return 0;
}
