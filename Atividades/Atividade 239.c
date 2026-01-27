#include<stdio.h>
/*
                            Lista - Questão 239
Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Você deve criar um menu com as duas opções de conversão e com uma opção
para nalizar o programa. O usuário poderá fazer quantas conversões desejar, sendo
que o programa só será nalizado quando a opção de nalizar for escolhida.
*/

int main()
{
    int op;
    float valork, valorm;

    do
    {
        printf("Digite:\n1 - Para converter de km/h para m/s\n2 - Para converter de m/s para km/h\n0 - Sair\nOpcao: ");
        scanf(" %d", &op);
        switch (op)
        {
        case 1:
            printf("\nDigite o valor em km/h: ");
            scanf("%f", &valork);
            printf("Convertendo: %.2f m/s\n", valork * 0.27777778);
            break;
        case 2:
            printf("\nDigite o valor em m/s: ");
            scanf("%f", &valorm);
            printf("Convertendo: %.2f km/h\n", valorm * 3.6);
            break;
        case 0:
            printf("\nSaindo...");
        default:
            printf("\nNumero errado! Digite Novamente!\n");
            break;
        }
    } while (op != 0);
    
    return 0;
}
