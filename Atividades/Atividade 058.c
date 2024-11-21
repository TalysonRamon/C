/*
Leia um valor de velocidade em metros por segundo e apresetá-la em quilômetros por
hora.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float ms;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);

    //Para converter m/s em km/h, basta multiplicar o valor por 3,6.
    printf("A velocidade em km/h é: %.2f", ms * 3.6);
    return 0;
}
