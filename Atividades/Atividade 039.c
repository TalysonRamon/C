//Leia o valor do raio de uma esfera e calcule a área de sua superfície e o volume da
//esfera.

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float r;
    printf("Digite o valor do raio da esfera em cm: ");
    scanf("%f", &r);
    printf("A área da superficie é: %.2f cm\n", 4 * 3.14 * pow(r, 2));
    printf("O volume da esfera é: %.2f cm", (4 / 3) * 3.14 * pow(r, 3));
    return 0;
}
