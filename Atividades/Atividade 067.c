/*
Ler um valor de massa em libras e converter para quilogramas.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float l;

    printf("Digite o valor da massa em libras: ");
    scanf("%f", &l);

    //Para converter libra em quilogramas, basta dividir o valor por 2,20462.
    printf("Convertendo o valor, obtemos: %.2f kg", l / 2.20462);
    return 0;
}