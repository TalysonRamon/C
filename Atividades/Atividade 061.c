/*
Leia um valor de comprimento em polegadas e convertê-lo em centímetros.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float p;

    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &p);

    //Para converter polegadas em centrimos, basta multiplicar o valor por 2,54.
    printf("Convertendo o valor, obtemos: %.2f cm", p * 2.54);   
    return 0;
}
