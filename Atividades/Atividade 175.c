#include<stdio.h>
/*
                                Lista - Questao 175
 Faça um programa que leia uma opção que especifica uma determinada conversão entre
escalas termométricas e, em seguida, solicite a temperatura a ser convertida. As opções
de conversão são as seguintes:
• 1 deCelsius para Fahrenheit.
• 2 deCelsius para Kelvin.
• 3 deFahrenheit para Celsius.
• 4 deFahrenheit para Kelvin.
• 5 deKelvin para Celsius.
• 6 deKelvin para Fahrenheit
*/

int main()
{
    int op;
    float cel, fah, kel;

    printf("Digite:\n1 - Para conversao de Celsius para Fahrenheit\n2 - Conversao de Celsius para Kelvin\n3 - Conversao de Fahrenheit para Celsius\n");
    printf("4 - Conversao de Fahrenheit para Kelvin\n5 - Conversao de Kelvin para Celsius\n6 - Conversao de Kelvin para Fahrenheit\nOpcao: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &cel);
        printf("Convertendo para Fahrenheit: %.2fF", cel * 32);
        break;
    case 2:
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &cel);
        printf("Convertendo para Kelvin: %.2fK", cel * 274.15);
        break;
    case 3:
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fah);
        printf("Convertendo para Celsius: %.2fC", (fah - 32) / 1.8);
        break;
    case 4:
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &fah);
        printf("Convertendo para Kelvin: %.2fK", fah * 255.927778);
        break;
    case 5:
        printf("Digite a temperatura em Kelvin: ");
        scanf("%f", &kel);
        printf("Convertendo para Celsius: %.2fC", kel - 273.15);
        break;
    case 6:
        printf("Digite a temperatura em Kelvin: ");
        scanf("%f", &kel);
        printf("Convertendo para Fahrenheit: %.2fF", (kel * 1.8) - 459.67);
        break;
    default:
        printf("Opcao incorreta! Digite Novamente!");
        break;
    }
    return 0;
}
