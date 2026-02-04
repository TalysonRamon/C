/*
Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int s, n1, n2;
    float d1, d2;
    // do while para voltar caso o usúario não digite 0.
    do
    {
        //system para limpar a tela depois de realizar uma operação.
        system("cls");
        printf("MENU:\n1 - Somar\n2 - subtrair\t3 - Multiplicar\n4 - Dividir\t0 - sair\nDigite sua opção: ");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            printf("SOMA:\n");
            printf("Digite dois números: ");
            scanf("%d%d", &n1, &n2);
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            system("pause");
            break;
        case 2:
            printf("SUBTRAÇÃO:\n");
            printf("Digite dois números: ");
            scanf("%d%d", &n1, &n2);
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            system("pause");
            break;
        case 3:
            printf("MULTIPLICAÇÃO:\n");
            printf("Digite dois números: ");
            scanf("%d%d", &n1, &n2);
            printf("%d x %d = %d\n", n1, n2, n1 * n2);
            system("pause");
            break;
        case 4: 
            printf("DIVISÃO:\n");
            do
            {
                printf("Digite dois números (o segundo número tem que ser diferente de 0) : ");
                scanf("%f%f", &d1, &d2);
            } while (d2 == 0);
            printf("%.2f / %.2f = %.2f", d1, d2, d1 / d2);
            system("pause");
        case 0:
            break;
        default:
            printf("Opção invalida\n");
            system("pause");
            break;
        }
    } while (s != 0);
    
    printf("\nSaindo...");
    return 0;
}
