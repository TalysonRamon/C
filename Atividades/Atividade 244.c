#include<stdio.h>
/*
                            Lista - Questão 244
Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
• adição (opção 1)
• subtração (opção 2)
• multiplicação (opção 3)
• divisão (opção 4).
• saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do
resultado e a volta ao menu de opções. O programa só termina quando for escolhida a
opção de saída (opção 5).
*/

int main()
{
    int op;
    float n1, n2;

    do{
        printf("Digite:\n1 - Para adicao\n2 - para subtracao\n3 - multiplicacao\n4 - para divisao\n5 - para sair\nOpcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nSoma:\n");
            printf("Digite dois numeros para realizar a soma: ");
            scanf("%f%f", &n1, &n2);
            printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case 2:
            printf("\nSubtracao:\n");
            printf("Digite dois numeros para realizar a subtracao: ");
            scanf("%f%f", &n1, &n2);
            printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            break;
        case 3:
            printf("\nMultiplicacao:\n");
            printf("Digite dois numeros para realizar a multiplicacao: ");
            scanf("%f%f", &n1, &n2);
            printf("%.2f x %.2f = %.2f\n", n1, n2, n1 * n2);
            break;
        case 4:
            printf("\nDivisao:\n");
            do{
                printf("Digite dois numeros para realizar a divisao (segundo numero diferente de zero): ");
                scanf("%f%f", &n1, &n2);
            } while (n2 == 0);
            printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao incorreta! Digite Novamente!\n");
            break;
        }
    } while (op != 5);
    
    return 0;
}
