#include<stdio.h>
#include<math.h>
/*
                            Lista - Questão 136
Faça um programa que uma opção e três valores e calcule uma média correspondente
a uma das seguintes opções:
• A=média aritmética.
• P=médiaponderada com pesos 1, 2 e 3 para o primeiro, segundo e terceiro valor,
respectivamente.
• G=média geométrica.
• H=média harmônica
O programa deve aceitar as opções tanto em caracteres maiúsculos como minúsculos.
O programa deve exibir uma mensagem de erro caso a opção escolhida seja inválida
*/

int main()
{
    char opcao;
    float v1, v2, v3;

    printf("A = media aritmetica\nP = Media ponderada\nG = Media geometrica\nH = Media Harmonica\nDigite sua opcao: ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case 'a':
        printf("Media aritmetica:\n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media entre os valores e: %.2f", (v1 + v2 + v3) / 3.0);
        break;
    case 'A':
        printf("Media aritmetica:\n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media entre os valores e: %.2f", (v1 + v2 + v3) / 3.0);
        break;
    case 'p':
        printf("Media Ponderada: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media ponderada entre os valores e: %.2f", (v1 + v2 * 2 + v3 * 3 ) / 6.0);
        break;
    case 'P':
        printf("Media Ponderada: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media ponderada entre os valores e: %.2f", (v1 + v2 * 2 + v3 * 3 ) / 6.0);
        break;
    case 'G':
        printf("Media Geometrica: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        float soma = v1 * v2 * v3;
        printf("A media geometrica entre os valores e: %.2f", pow(soma, 1/3.0));
        break;
    case 'g':
        printf("Media Geometrica: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        float som = v1 * v2 * v3;
        printf("A media geometrica entre os valores e: %.2f", pow(som, 1/3.0));
        break;
    case 'H':
        printf("Media Harmonica: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media harmonica entre os valores e: %.2f", 3.0 / (1 / v1 + 1/ v2 + 1 / v3));
        break;
    case 'h':
        printf("Media Harmonica: \n");
        printf("Digite tres valores: ");
        scanf("%f%f%f", &v1, &v2, &v3);
        printf("A media harmonica entre os valores e: %.2f", 3.0 / (1 / v1 + 1/ v2 + 1 / v3));
        break;
    default:
        printf("Erro! Caracter nao correspondente!");
        break;
    }
    return 0;
}
