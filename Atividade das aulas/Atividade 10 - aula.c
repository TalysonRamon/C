/*
Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.  
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int esc;
    float real = 0, dolar = 0;
    
    printf("\nDigite: \n1 - Converter de Real para Doólar: \n2 - Converter de Dólar para Real: \n");
    scanf("%d", &esc);

    switch (esc)
    {
    case 1: // Converte de real para dolar.
        printf("Digite o valor em reais: ");
        scanf("%f", &real);

        dolar = real / 5.30;

        printf("\nO valor convertido em dolar é: %.2f$", dolar);
        break;
    case 2: // Converte de dolar para real.
        printf("Digite o valor em dolar: ");
        scanf("%f", &dolar);

        real = dolar * 5.30;

        printf("\nO valor do dolar convertido em real é: %.2fR$", real);
        break;
    
    default: // Caso o número digitado seja diferente de 1 e 2.
        printf("**Digito incorreto!**");
        break;
    }
    
    return 0;
}
