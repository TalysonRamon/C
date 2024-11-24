/*
Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int seg, hora, minut;

    printf("Digite a quantidade de segundos a ser convertido: ");
    scanf("%d", &seg);

    hora = (seg / 3600) % 24;
    minut = (seg / 60) % 60;
    seg = seg % 60;

    printf("O horário correspondente a quntidade de segundos é: %02d:%02d:%02d", hora, minut, seg);
    return 0;
}
