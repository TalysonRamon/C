// ** ESTRUTURA DE REPETIÇÂO "do While" **

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;

    //Teste para asaber se o usuario digitou o que foi pedido.
    do
    {
        printf("Digite um valor maior que zero: ");
        scanf("%d", &a);

    } while (a <= 0);

    printf("Valor digitado: %d", a);
    
    return 0;
}