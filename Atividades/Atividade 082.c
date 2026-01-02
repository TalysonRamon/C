#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 082
Ler a altura e o raio de um cilindro circular e imprimir o volume do cilindro
*/

int main()
{
    float altura, raio;
    printf("Digite a altura e o raio de um cilindro circular: ");
    scanf("%f%f", &altura, &raio);

    printf("O volume do cilindro e: %.2f m3", 3.1415 * pow(raio, 2) * altura);
    return 0;
}
