// ** ESTRUTURA DE REPETIÇÂO "While" **

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;

    printf("Digite o número 1 ou 2: ");
    scanf("%d", &a);

    // while para mostrar para testar se o usuario digitou o que foi pedido.
    while (a != 1 && a != 2)
    {
        printf("Número INCORRETO!! \n");
        printf("Digite o número novamente: \n");
        scanf("%d", &a);
    }
    
    printf("Número lido: %d", a);
    return 0;
}