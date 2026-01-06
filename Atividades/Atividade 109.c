#include<stdio.h>
/*
Em uma loja, o cliente, ao fazer uma compra a prazo, pode estabelescer o um prazo de
10 a 90 dias para pagar a compra. Faça um programa que leia uma data no formato
dd/mm/aaaa e uma quantidade de dias n, adicione os n dias à data fornecida e mostre
a data limite para pagamento, no formato dd/mm/aaaa.
Dica: a conversão entre formatos de datas pode ser útil à construção deste programa
*/

int main()
{
    int dia, mes, ano, n;

    printf("Digite a data da compra (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("Digite o numero de dias do prazo: ");
    scanf("%d", &n);

    dia = dia + n;

    if (dia > 31){
        mes += dia / 31;
        int ndia = dia % 31;

        if (mes > 12){
            ano++;
            int nmes = mes - 12;

            printf("Data para pagamento: %.2d/%.2d/%.4d", ndia, nmes, ano);
        }
        else
            printf("Data para pagamento: %.2d/%.2d/%.4d", ndia, mes, ano);
    }
    else
        printf("Data para pagamento: %.2d/%.2d/%.4d", dia, mes, ano);

    return 0;
}
