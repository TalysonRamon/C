/*
Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a;

    printf("1 - Janeiro\t2 - Fevereiro\n3 - Março\t4 - Abril\n5 - Maio\t6 - Junho\n7 - Julho\t8 - Agosto\n9 - Setembro\t10 - Outubro\n11 - Novembro\t12 - Dezembro\n");
    printf("\nDigite o número referente ao mês: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("O mês de janeiro tem 31 dias.");
        break;
    case 2:
        printf("O mês de Fevereiro tem 28 dias.");
        break;
    case 3:
        printf("O mês de Março tem 31 dias.");
        break;
    case 4:
        printf("O mês de Abril tem 30 dias.");
        break;
    case 5:
        printf("O mês de Maio tem 31 dias.");
        break;
    case 6:
        printf("O mês de Junho tem 30 dias.");
        break;
    case 7:
        printf("O mês de Julho tem 31 dias.");
        break;
    case 8:
        printf("O mês de Agosto tem 31 dias.");
        break;
    case 9:
        printf("O mês de Setembro tem 30 dias.");
        break;
    case 10:
        printf("O mês de Outubro tem 31 dias.");
        break;
    case 11:
        printf("O mês de Novembro tem 30 dias.");
        break;
    case 12:
        printf("O mês de Dezembro tem 31 dias.");
        break;
    default: 
        printf("O número digitado está imcorreto!");
        break;
    }

    return 0;
}
