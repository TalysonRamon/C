/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int X, Y;

    do
    {
        printf("\nDigite as cordenadas de X e Y: ");
        scanf("%d%d", &X, &Y);

        if (X > 0 && Y > 0)
        {
            printf("1° quadrante");
        }
        else if (X < 0 && Y > 0)
        {
            printf("2° quadrante");
        }
        else if (X < 0 && Y < 0)
        {
            printf("3° quadrante");
        }
        else if (X > 0 && Y < 0)
        {
            printf("4° quadrante");
        }
        else
        {
            
        }
        
    } while (X != 0 && Y != 0);

    return 0;
}
