#include<stdio.h>
/*
                            Lista - Questão 130
Faça um programa que escreva o menu abaixo, leia uma opção do usuário e execute a
operação correspondente. O programa deve exibir uma mensagem de erro se a opção
for inválida. O menu do programa deve ser o seguinte:
Escolha uma opção:
1- Soma de dois números.
2- Diferença entre dois números.
3- Produto entre dois números.
4- Divisão entre dois números (o denominador não pode ser zero).
Sua opção
*/

int main()
{
    int op;
    float n1, n2;

    printf("Escolha uma opaoo:\n1-Soma de dois numeros\n2 - Diferenca de dois numeros\n3 - Produto de dois numeros:\n4 - Divisao entre dois numeros:\nDigite sua opcao: ");
    scanf("%d", &op);

    printf("Digite dois numeros: ");
    scanf("%f%f", &n1, &n2);
    
    switch (op)
    {
    case 1:
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case 3: 
        printf("%.2f x %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case 4:
        if (n2 == 0){
            printf("Impossivel realizar a divisao!");
        }
        else
            printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
    default:
        printf("Erro! Opcao invalida!");
        break;
    }
    return 0;
}
