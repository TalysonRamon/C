#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
                            Lista - Questão 105
Faça um programa que:
• Gere dois números aleatórios a e b inteiros, positivos e no intervalo de [1;100];
• Escolher aleatoriamente uma das operações artiméticas básicas (soma, subtração,
divisão ou multiplicação) para ser executada entre os operandos a e b;
• Pedir ao usuário que forneça o resultado da operação aritmética gerada no ítem
anterior;
• Monitorar o tempo de resposta do usuário (tempo entre a momento em que o
programa exibe a operação aritmética gerada e o momento em que é fornecida a
resposta);
• Exibir o resultado entrado pelo usuário; o resultado correto; e o tempo, em segun
dos, que o usuário levou para responder.
Dica: use a função time da biblioteca time.h
*/

int main()
{
    unsigned int x, y, esc;
    float resp;
    time_t fim, inicio;

    srand(time(NULL));

    printf("\nTeste de inteligencia: \n");

    esc = rand();
    esc = esc % 4;
    inicio = time(NULL);
    switch (esc)
    {
    case 0:
        printf("\nSoma:\n");

        x = rand();
        y = rand();

        x = x % 100;
        y = y % 100;

        printf("Resolva a soma a seguir: \n");
        printf("%d + %d = ", x, y);
        scanf("%f", &resp);

        if (resp == (x + y))
            printf("Resposta correta!!\n");
        else{
            printf("Resposta incorreta!!\n");
            printf("Resposta: %d", x + y);
        }
        break;
    case 1: 
        printf("\nSubtracao:\n");

        x = rand();
        y = rand();

        x = x % 100;
        y = y % 100;
        int resul = x - y;
        printf("Resolva a subtracao a seguir: \n");
        printf("%d - %d = ", x, y);
        scanf("%f", &resp);

        if (resp == resul)
            printf("Resposta correta!!\n");
        else{
            printf("Resposta incorreta!!\n");
            printf("Resultado: %d\n", resul);
        }
        break;
    case 2:
        printf("\nDivisao:\n");

        x = rand();
        y = rand();

        x = x % 100;
        y = y % 100;
        float resu = x / y;

        printf("Resolva a divisao a seguir (resultado inteiro da divisao): \n");
        printf("%d / %d = ", x, y);
        scanf("%f", &resp);

        if (resp == resu)
            printf("Resposta correta!!\n");
        else{
            printf("Resposta incorreta!!\n");
            printf("Resposta: %.0f", resu);
        }
        break;
    case 3:
        printf("\nMultiplicacao:\n");

        x = rand();
        y = rand();

        x = x % 100;
        y = y % 100;
        float resu1 = x * y;

        printf("Resolva a multiplicacao a seguir: \n");
        printf("%d * %d = ", x, y);
        scanf("%f", &resp);

        if (resp == resu1)
            printf("Resposta correta!!\n");
        else{
            printf("Resposta incorreta!!\n");
            printf("Resultado: %.2f\n", resu1);
        }
        break;
    default:
        printf("ERROR!!");
        break;
    }

    fim = time(NULL);

    double tempo_gasto = difftime(fim, inicio);

    printf("\nTempo gasto: %.0f s", tempo_gasto);
    
    return 0;
}
