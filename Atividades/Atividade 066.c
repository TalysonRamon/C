/*
Ler um valor de massa em quilogramas e converter para libras.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float kg;

    printf("Digite o valor da massa em quilogramas: ");
    scanf("%f", &kg);

    //Para converter quilogramas em libras, basta multiplicar o valor por 2,20462.
    printf("Convertendo o valor, obtemos: %.2f libras", kg * 2.20462);   
    return 0;
}