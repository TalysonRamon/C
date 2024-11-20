/*
   Faça um programa para ler um horário (hora:minuto:segundo) de início e a duração,
   em segundos, de uma experiência biológica. O programa deve informar o horário
   (hora:minuto:segundo) de término da mesma.
 */

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");

    //Leitura do horário e duração:

    int h, m, s;
    int dur, tempinicio, tempfinal;
    printf("Digite o hoário: (hora:minuto:segundo) ");
    scanf("%d%d%d", &h, &m, &s);
    printf("Digite a duração em segundos da experiência biológica:  ");
    scanf("%d", &dur);

    //Cálculo segundos:

    tempinicio = h * 3600 + m * 60 + s;
    tempfinal = tempinicio + dur;

    // divide por 3600 para passar de segundos para hora.
    // o resto da divisão por 24, pois é no formato de 24 horas.
    h = (tempfinal / 3600) % 24;

    // divide por 60 para passar de segundos para minuto.
    // o resto da divisão por 60, pois é no formato de 60 minutos.
    m = (tempfinal / 60) % 60;

    // Não divide pois já está em segundos.
    // o resto da divisão por 60, pois é no formato de 60 segundos.
    s = tempfinal % 60;

    //horário de termino:
    printf("Tempo final: %d", tempfinal);
    printf("O horário de termino é: (%02d:%02d:%02d)", h, m, s);
    return 0;
}
