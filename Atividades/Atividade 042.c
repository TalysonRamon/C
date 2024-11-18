//Leia os valores de dois catetos de um triângulo e calcule e mostre o valor da hipotenusa.

#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    float a, o;
    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &o);
    printf("O valor da hipotenusa é: %.2f", sqrt(pow(a, 2) + pow(o, 2)));
    return 0;
}
