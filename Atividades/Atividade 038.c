//Leia o valor do raio de um círculo e calcule a sua circunferência.

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float r;
    printf("Digite o valor do raio do círculo em cm: ");
    scanf("%f", &r);
    printf("A circunferência do circulo é: %.2f cm", 2 * 3.14 * r);
    return 0;
}
