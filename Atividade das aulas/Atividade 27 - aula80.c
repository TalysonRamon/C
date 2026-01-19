/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float rad;
    int time = 0;

    printf("Digite a massa do material radioativo: ");
    scanf("%f", &rad);

    //While só vai parar quando a massa for menor que 0,5.
    while (rad > 0.05)
    {
        //Divide a massa por 2.
        rad = rad / 2;
        //Adiciona 50 segundos a cada atualização.
        time += 50;
    }
    
    printf("O tempo necessario para a massa ficar menor que 0,05 é: %d segundos", time);
    return 0;
}
