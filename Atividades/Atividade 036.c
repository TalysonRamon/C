//Faça um programa que receba a altura do degrau de uma escada e a altura que o usuário
//deseja alcançar subindo a escada. Calcular e mostrar quantos degraus o usuário deverá
//subir para atingir seu objetivo, sem se preocupar com a altura do usuário.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float a, d;
    printf("Qual a altura do degrau da escada em m? ");
    scanf("%f", &a);
    printf("Qual a altura que deseja alcançar ao subir a escada em m? ");
    scanf("%f", &d);
    printf("Para alcançar está altura você deve subir %.2f degraus!", d / a);
    return 0;
}
