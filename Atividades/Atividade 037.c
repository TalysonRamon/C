//Leia o valor do raio de um círculo e calcule a área deste círculo.

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float r;
    printf("Digite o tamanho do raio do circulo em cm: ");
    scanf("%f", &r);
    printf("A área do circulo é: %.2f cm", 3.14 * pow(r, 2));
    return 0;
}
