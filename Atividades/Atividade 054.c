/*
Faça um programa que leia um valor inteiro em segundos e exiba a quantidade de horas,
minutos e segundos correspondente ao valor lido.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int seg, hora, minutos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &seg);
    
    //Cálculo da conversão de segundos em horas e minutos;
    hora = (seg / 3600) % 24;
    minutos = (seg / 60) % 60;
    seg = seg % 60;

    //exibindo o valor correspondente aos segundos.
    printf("O horário correspondente aos segundos é: %02d:%02d:%02d", hora, minutos, seg);
    return 0;
}
